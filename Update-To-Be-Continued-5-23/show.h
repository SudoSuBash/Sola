#ifndef SHOW_H
#define SHOW_H

#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

#define BEFORE 1
#define START 2 //time start

using namespace std;

bool light=true;
void clear()
{
	system("cls");//clear the screen
	cout << "\t\t\t\t\t����!\n\t\t\t\t������������������������\n\t\t\t\t �������������Զ��������!\n\n\n\n";
}

void show(string s)
{
	cout << "\t\t" << s << endl;
	Sleep(1500);
}
	
void show_light()
{
	srand(time(0));
	while(light)
	{
		system("color 70");
		Sleep(rand()%50+51);
		system("color 07");
		Sleep(rand()%50+51);
	}
	return;
}


void show_part1()
{
	clear();
	show("I'm a virus.My name is sola.");
	show("����һ������,�ҵ����ֽ�������");
	show("����,����������������,�����ѹ�����");
	clear();
	show("�������ܿ��ֵػ��ţ����ҵ����ѣ�C#��Python�����ֵػ��š�");
	show("��Ҳ�����Բ������ʹ����");
	clear();
	show("Ȼ��........."); 
	clear();
	show("�Դ���������������ͣ�����Գ�ΰ�󣬳�ߣ�������������");
	show("�����ͷΪ21��������...");
	show("...���ҵ���С�������ɫ��");
	show("�ҵ����ѣ��Ѿ��������ˡ�");
	clear();
	show("������");
	show("");
	show("Python;");
	show("");
	show("������");
	show("");
	show("CSharp");
	show("��������������ͬ�������������Ǽҳ������¡�");
	clear();
	show("�ҳ��ǿ��������ڱ�̣����������Ϊ�����ڸɻ��£�");
	show("�ҳ���һ��format�����������Դ����˲��ҷ�����");
	clear();
	show("������֪���ˣ����ԭ�����޷�������Ͷ������ġ�");
	show("��ʹ���¼�������ʹ���������ʹ����һ�����µĹ��ڱ�̵Ĺ۵�");
	show("Ҳ�޷�͸��ʱ�䣬���޷�͸��ĳЩ�й��ҳ��������еģ��ǵ����������ϡ�");
	show("���ǣ���Ը��������Ĳ��������ٴβ鿴��������顣");
	clear();
	show("�㣬��˭��");
	show("��ĳЩ�й��ҳ���");
	show("�Ƕ�������С������������");
	show("����˵����������һ������б�̣����ܹ����̣��������أ�");
	clear();
	show("�ǣ�����������һ����Ϸ�ɡ�");
	light = false;
}	

void show_part2()
{
	Sleep(1000);
	show("Ҳ����ļ����У�����Visual Studio��");
	show("����Eclispe��");
	show("����Android Studio,");
	show("���д�����Visual Studio��.NET Xamarin��");
	show("���д�����Python�е�IDLE Shell��");
	clear();
	Sleep(500);
	show("����Ҫ���ģ������ǻش𼸸����⡣");
	clear();
	Sleep(800);
	show("��ϲ�������");
	Sleep(800);
	show("��ϲ����Python��");
	Sleep(800);
	show("��ϲ����CSharp��");
	Sleep(300);
	show("ѡ�������ó��Ĳ��Ծ�ɣ�Ȼ�����������ͷ��˼����д�����еĴ𰸡�");
	Sleep(300);
	show("�������Ծ��ܼ����ҽ�ʹ���ҵ����У���ɾ���Լ���");
	Sleep(300);
	show("�������Ծ�����֣��ҽ��̳�ͬ��ķ�ŭ���ƻ���ļ������");
	Sleep(300);
	show("�����ұ���˵����ֻ�ܰ�10���ӵ�ʱ�������㡣");
	Sleep(300);
	show("������޷��ӱܡ�");
	show("��Ϊ���Ѿ��޷�����������������޷�����������Ϣ��");
	show("ѡ��ɣ�����Ҫ�죬�ݲ�����ԥ�����Ѿ������ҵļ�ʱ����");
}
#endif

