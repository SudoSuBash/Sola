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
	cout << "\t\t==========问题 1============\n";
	cout << "Python还有一个Java版本,请问Java版本的Python的名字叫做\n:";
	cout << "不会?输入Pass来跳过这个题目.\n答案:";	
	cin >> ans;
	if(ans=="Jython" || ans=="JPython") *mark_py++;
	py_que2();
}

void py_que2()
{
	system("cls");
	string ans1,ans2;
	cout << "\t\t==========问题 2============\n";
	cout << "有下列语句来描述A:1.外部库,需要使用import来导入;2.用来绘图;3.Python的第3方库;4.用Tkinter所写;5.与Scratch的前身Logo语言类似.这5个语句中只有一个是错误的.现在请说出A的名称,并且写出错误的语句,用一个空格隔开,用到的字母均为小写:\n";
	cout << "不会?输入Pass来跳过这个题目.\n答案:";
	cin >> ans1 >> ans2;
	if(ans1=="turtle" && ans2=="3") *mark_py++;
	py_que3();
}

void py_que3()
{
	system("cls");
	string ans1,ans2;
	cout << "\t\t==========问题 3============\n";
	cout << "在哪两个Python2中,允许使用print()函数,请用空格隔开你的两个答案,答题格式为pythonx.x:\n";
	cout << "不会?输入Pass来跳过这个题目.\n答案:";
	cin >> ans1 >> ans2;
	if(ans1=="python2.6" && ans2=="python2.7") *mark_py++;
	py_que4();
}

void py_que4()
{
	system("cls");                              
	string ans;
        cout << "\t\t==========问题 4============\n";
	cout << "在Python中,如果你需要改变IDLE Shell中的命令提示符的字符(例如由>>>改为...)该导入哪个模块:\n";
	cout << "不会?输入Pass来跳过这个题目.\n答案:";
	cin >> ans;
	if(ans=="os") *mark_py++;
	py_que5();
}

void py_que5()
{
	system("cls");                              
	string ans;
	cout << "\t\t==========问题 5============\n";
	cout << "在python中,+=运算符首先会调用哪个方法完成运算(方法末尾不需要添加括号):\n";	
	cout << "不会?输入Pass来跳过这个题目.\n答案:";
	cin >> ans;
	if(ans=="__iadd__") *mark_py++;
}
#endif
