#include "show.h"
#include <thread>
using namespace std;

void show_part1();

thread th1(show_part1);
thread th2(show_light);
int main()
{
	th1.join();
} 
