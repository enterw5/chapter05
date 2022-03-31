
/*FileName:T5_16.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 26,2022
Function: calculate compound interest and divide the amount into dollars and cents*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    long  long int amount;
    int principal=1000;
    int r=5;
    int a1,a2;
    long long int s;
    cout <<"Year"<<setw(21)<<"Amount on deposit"<<endl;

    for(unsigned int year=1;year<=10;++year)
    {
        amount =principal/pow(10,year)*pow(100+r,year);
        s=pow(10,year);
        a1=amount/s;
        if(year<=2)
        a2=amount%s;
        else
            a2=amount%s;
        cout<<setw(4)<<year<<setw(10)<<a1<<"."<<a2<<endl;
    }

    return 0;
}
