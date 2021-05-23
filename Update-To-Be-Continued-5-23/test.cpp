#include <windows.h>
#include <tlhelp32.h>
#include <iostream>

using namespace std;

int main()
{
	string a;
	cin >> a;
	HANDLE h=CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS,0);
	if(h==INVALID_HANDLE_VALUE) cout << "fail";
	else{
		PROCESSENTRY32 pe32;
		pe32.dwSize=sizeof(PROCESSENTRY32);
		Process32First(h,&pe32);
		do
		{
			if(!lstrcmp(pe32.szExeFile,(LPSTR)a.c_str()))
			{
				HANDLE hd=OpenProcess(PROCESS_ALL_ACCESS,true,pe32.th32ProcessID);
				if(hd==NULL) cout<< "fail";
				cout << pe32.th32ProcessID; 
			}
		}while(Process32Next(h,&pe32));
		CloseHandle(h);
	}
	return 0; 
}
