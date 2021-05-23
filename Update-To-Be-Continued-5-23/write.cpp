#include <fstream>
#include <windows.h>

using namespace std;

int main()
{
	ofstream o;
	o.open("C:\\a.txt",ios::out);
	o << "Hello" << endl;
	o.close();
	GetSystemDirectory();
	return 0;
}
