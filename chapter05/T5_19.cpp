/*FileName:T5_19.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 26,2022
Function: calculate ¦°*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int counter;
    double m=0;
    cout<<setw(10)<<"counter"<<setw(21)<<"sum"<<endl;
    for(counter=1;counter<=1000;counter++)
    {
        m=m+1.0*4/(2*counter-1)*pow(-1,counter-1);
        cout<<setw(10)<<counter<<setw(21)<<"m= "<<m<<endl;
    }
    return 0;
}
