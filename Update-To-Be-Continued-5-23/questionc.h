#ifndef QUESTIONC_H
#define QUESTIONP_H

#include <iostream>
using namespace std;

int* mark_cs;

void cs_que1(int* score); 
void cs_que2();
void cs_que3();
void cs_que4();
void cs_que5();
 
void cs_que1(int* score)
{
        system("cls");
        *mark_cs=*score;
        string ans1,ans2,ans3;
        cout << "\t\t==========���� 1============\n";
        cout << "��C#�У�������������������ܱ�ֱ������,����д���,�ÿո����(����:9 10 15,��Ȼ,��ֻ��һ������,�������Ŀ�в�����������ڴ˵Ĵ�):\n1. .. 2. + 3. += 4. < 5. = 6. != 7. <= 8. >=:\n";
        cout << "����?����Pass�����������Ŀ.\n��:";
        cin >> ans1 >> ans2 >> ans3;
        if(ans1=="1" && ans2=="3" && ans3=="5") *mark_cs++;    
		cs_que2();     
}

void cs_que2()
{

}
void cs_que3()
{

}
void cs_que4()
{

}
void cs_que5()
{

}
//cs_que5():Don't use cs_que6(),because none function named cs_que6()
#endif
