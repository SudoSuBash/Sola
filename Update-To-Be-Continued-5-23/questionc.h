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
        cout << "\t\t==========问题 1============\n";
        cout << "在C#中，下列哪三个运算符不能被直接重载,请填写序号,用空格隔开(例如:9 10 15,当然,这只是一个范例,在这个题目中不会出现类似于此的答案):\n1. .. 2. + 3. += 4. < 5. = 6. != 7. <= 8. >=:\n";
        cout << "不会?输入Pass来跳过这个题目.\n答案:";
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
