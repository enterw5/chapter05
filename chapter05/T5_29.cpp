/*FileName:T5_29.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 27,2022
Function: calculate compound interest*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double amount;
    double principal=24.0;
    int r;
    double rate;
    for(r=5;r<=10;r++)
        {
            rate=1.00*r/100;
            cout <<"Year"<<setw(22)<<"Amount on deposit"<<endl;
            cout<<fixed<<setprecision(2);
            for(unsigned int year=1;year<=387;++year)
            {
                amount =principal*pow(1.0+rate,year);
                cout<<setw(4)<<year<<setw(22)<<amount<<endl;
            }
        }
    return 0;
}
