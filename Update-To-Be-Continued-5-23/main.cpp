//Mader:Rong Chen,Chaorui Wang
//Made Time Start:2021/05/13
//
//This program we have to make because one of a 
//mader's parents don't let him to write computer 
//program and discriminate the code-writer.So we 
//have to make this program in order to give them
//a lesson and let their discrimination disappear.
//
//Use language:CSharp(.NET Framework 4.7) and GCC/C++
//.
// 
//This program uses Dev-C++ but not Visual-C++ becau-
//se of if you use Visual-C++ and make/run the progr-
//am,you may need to download or install like MSVCPxx-
//x.dll,so we don't wan't to use Visual-C++ to make t-
//he program.

#include <iostream>
#include <windows.h>
#include <thread>
#include "questionp.h"
#include "questionc.h"
#include "thiskill.h"
#include "conkill.h"
#include "changembr.h"
#include "show.h"

using namespace std;

int SCORE         =  0;
string ANSWER     =  NULL;
string CHOOSE	  =  NULL;
HWND hwnd	      =  FindWindow("ConsoleWindowClass",NULL);	//Get Window Handle

void calctime();
bool check(int score);

thread py(py_que1,&SCORE);
thread cs(cs_que1,&SCORE);
thread showpart1(show_part1);
thread showlight(show_light);
thread timep(calctime);
//show_():in show.h
//define main variable

bool check(int score)
{
	if(score>=3) return true;
	else if(score>=0 && score<=3) return false;
}

void calctime()
{
	int time=0;
	while(time <=600)
	{
		time++;
		Sleep(1);
	}
	if(check(SCORE)==true) killthis(hwnd);
	else if(check(SCORE)==false) killcomputer(SCORE);//Not pass
}

int main()
{		
	
	if(ChangeMBR()==true && BackupMBR(backup)==true)
	{	
		system("cls");	
		if(showpart1.joinable() == true && showlight.joinable()==true)
		{
			DeleteMenu(GetSystemMenu(GetConsoleWindow(), FALSE), SC_CLOSE, MF_BYCOMMAND); 
		//If this thread can start
			showlight.detach();
			showpart1.join();//Attention:this thread variable must be join
			show_part2();
			timep.detach();
			do
			{
				cout << "ÇëÑ¡ÔñÄãµÄ²âÊÔ¾í:";//In Github it will show a bad word,but I don't why 
				cin >> CHOOSE;
			}while(CHOOSE !="s" && CHOOSE !="p");
			if(CHOOSE =="s" && cs.joinable()) cs.join();//Need to use join()
			else if(CHOOSE == "P" && py.joinable()) py.join();	
			if(check(SCORE)==true) killthis(hwnd);
			else if(check(SCORE)==false) killcomputer(SCORE);//Not pass
		}
	}
}
