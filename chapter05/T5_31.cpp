/*FileName:T5_31.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 31,2022
Function: calculate the estimated amount of tax paid by individuals*/
#include <iostream>

using namespace std;

int main()
{
   cout<<"Please input housing,food,trabsportation,education,health care,tourism and so on other expenses."<<endl;
   int h,f,t,e,health,tourism,o;
   cin>>h>>f>>t>>e>>health>>tourism>>o;
   cout<<(h+f+t+e+health+tourism+o)*0.23<<endl;
    return 0;
}
