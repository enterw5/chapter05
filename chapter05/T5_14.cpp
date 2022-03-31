/*FileName:T5_14.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 25,2022
Function: calculate total sales*/
#include <iostream>

using namespace std;

int main()
{
   int a,b;
    cin>>a>>b;
    while(a!=6)
        {
        switch(a)
        {
        case 1 :cout<<"the total money is : "<<2.98*b<<endl;break;
        case 2 :cout<<"the total money is : "<<4.50*b<<endl;break;
        case 3 :cout<<"the total money is : "<<9.98*b<<endl;break;
        case 4 :cout<<"the total money is : "<<4.49*b<<endl;break;
        case 5 :cout<<"the total money is : "<<6.87*b<<endl;break;
        default:break;
        }
        cin>>a>>b;
        }
    return 0;
}
