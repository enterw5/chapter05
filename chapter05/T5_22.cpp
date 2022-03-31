/*FileName:T5_22.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 26,2022
Function:prove whether the old and new expressions are equal according to de Morgan's law*/
#include <iostream>

using namespace std;

int main()
{
     int x,y;
    if((!(x<5)&&!(y>=7))==(!(x<5||y>=7)))
        cout<<"1"<<endl;
    else cout<<"0"<<endl;
    int a,b,g;
    if((!(a==b)||!(g!=5))==(!(a==b&&g!=5)))
        cout<<"1"<<endl;
    else cout<<"0"<<endl;
    if((!(x<=8)&&(y>4))==(!(x<=8)||!(y>4)))
        cout<<"1"<<endl;
    else cout<<"0"<<endl;
        int i,j;
    if((!((i>4)||(j<=6))==(!(i>4)&&!(j<=6))))
       cout<<"1"<<endl;
       else cout<<"0"<<endl;
    return 0;
}
