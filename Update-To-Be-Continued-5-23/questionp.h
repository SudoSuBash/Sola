#ifndef QUESTIONP_H
#define QUESTIONP_H

#include <iostream>
#include <windows.h>
using namespace std;

int* mark_py;

void py_que1(int* score);
void py_que2();
void py_que3();
void py_que4();
void py_que5();

void py_que1(int* score)
{
	system("cls");
	*mark_py=*score;
	string ans;
	cout << "\t\t==========���� 1============\n";
	cout << "Python����һ��Java�汾,����Java�汾��Python�����ֽ���\n:";
	cout << "����?����Pass�����������Ŀ.\n��:";	
	cin >> ans;
	if(ans=="Jython" || ans=="JPython") *mark_py++;
	py_que2();
}

void py_que2()
{
	system("cls");
	string ans1,ans2;
	cout << "\t\t==========���� 2============\n";
	cout << "���������������A:1.�ⲿ��,��Ҫʹ��import������;2.������ͼ;3.Python�ĵ�3����;4.��Tkinter��д;5.��Scratch��ǰ��Logo��������.��5�������ֻ��һ���Ǵ����.������˵��A������,����д����������,��һ���ո����,�õ�����ĸ��ΪСд:\n";
	cout << "����?����Pass�����������Ŀ.\n��:";
	cin >> ans1 >> ans2;
	if(ans1=="turtle" && ans2=="3") *mark_py++;
	py_que3();
}

void py_que3()
{
	system("cls");
	string ans1,ans2;
	cout << "\t\t==========���� 3============\n";
	cout << "��������Python2��,����ʹ��print()����,���ÿո�������������,�����ʽΪpythonx.x:\n";
	cout << "����?����Pass�����������Ŀ.\n��:";
	cin >> ans1 >> ans2;
	if(ans1=="python2.6" && ans2=="python2.7") *mark_py++;
	py_que4();
}

void py_que4()
{
	system("cls");                              
	string ans;
        cout << "\t\t==========���� 4============\n";
	cout << "��Python��,�������Ҫ�ı�IDLE Shell�е�������ʾ�����ַ�(������>>>��Ϊ...)�õ����ĸ�ģ��:\n";
	cout << "����?����Pass�����������Ŀ.\n��:";
	cin >> ans;
	if(ans=="os") *mark_py++;
	py_que5();
}

void py_que5()
{
	system("cls");                              
	string ans;
	cout << "\t\t==========���� 5============\n";
	cout << "��python��,+=��������Ȼ�����ĸ������������(����ĩβ����Ҫ�������):\n";	
	cout << "����?����Pass�����������Ŀ.\n��:";
	cin >> ans;
	if(ans=="__iadd__") *mark_py++;
}
#endif
