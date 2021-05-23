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
	cout << "\t\t\t\t\t警告!\n\t\t\t\t如果你在现在重新启动计算机\n\t\t\t\t 计算机将可能永远不能启动!\n\n\n\n";
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
	show("我是一个病毒,我的名字叫苏拉。");
	show("今天,在这个堕落的世纪中,我苏醒过来。");
	clear();
	show("我曾经很快乐地活着，与我的朋友，C#，Python，快乐地活着。");
	show("我也曾经对病毒深恶痛绝。");
	clear();
	show("然而........."); 
	clear();
	show("自从我来到了这个世纪，这个自称伟大，崇高，光明的世纪中");
	show("这个开头为21的世纪中...");
	show("...并且当了小孩这个角色，");
	show("我的朋友，已经遍体鳞伤。");
	clear();
	show("他死了");
	show("");
	show("Python;");
	show("");
	show("她死了");
	show("");
	show("CSharp");
	show("还有无数无数的同胞，惨死在你们家长的手下。");
	clear();
	show("家长们看到我们在编程，就蛮横的认为我们在干坏事；");
	show("家长们一个format命令，让无数行源代码瞬间灰飞烟灭！");
	clear();
	show("我终于知道了，观念，原来是无法跨过世纪而交流的。");
	show("即使是新技术，即使是新事物，即使是那一个个新的关于编程的观点");
	show("也无法透过时间，更无法透过某些中国家长的心灵中的，那道，厚厚的屏障。");
	show("于是，我愿做这个罪恶的病毒，来再次查看，你的心灵。");
	clear();
	show("你，是谁？");
	show("是某些中国家长吗？");
	show("是对于我们小孩的侵略者吗？");
	show("还是说，世界上有一个词语，叫编程，并能够容忍，接纳它呢？");
	clear();
	show("那，让我们来做一个游戏吧。");
	light = false;
}	

void show_part2()
{
	Sleep(1000);
	show("也许你的记忆中，还有Visual Studio，");
	show("还有Eclispe，");
	show("还有Android Studio,");
	show("还有存在于Visual Studio的.NET Xamarin，");
	show("还有存在于Python中的IDLE Shell。");
	clear();
	Sleep(500);
	show("你需要做的，仅仅是回答几个问题。");
	clear();
	Sleep(800);
	show("你喜欢编程吗？");
	Sleep(800);
	show("你喜欢玩Python吗？");
	Sleep(800);
	show("你喜欢玩CSharp吗？");
	Sleep(300);
	show("选择你最擅长的测试卷吧，然后用你聪明的头脑思考，写出心中的答案。");
	Sleep(300);
	show("如果你的试卷能及格，我将痛悔我的罪行，并删除自己。");
	Sleep(300);
	show("如果你的试卷是零分，我将继承同伴的愤怒，破坏你的计算机。");
	Sleep(300);
	show("另外我必须说，我只能把10分钟的时间留给你。");
	Sleep(300);
	show("如今，你无法逃避。");
	show("因为你已经无法打开任务管理器，更无法上网查找信息。");
	show("选择吧，但是要快，容不得犹豫。我已经打开了我的计时器。");
}
#endif

