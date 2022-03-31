/*FileName:T5_11.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 25,2022
Function: change the interest rate and seek the compound interest amount*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double amount;
    double principal=1000.0;
    int r;
    double rate;
    for(r=5;r<=10;r++)
        {
            rate=1.00*r/100;
            cout <<"Year"<<setw(21)<<"Amount on deposit"<<endl;
            cout<<fixed<<setprecision(2);
            for(unsigned int year=1;year<=10;++year)
            {
                amount =principal*pow(1.0+rate,year);
                cout<<setw(4)<<year<<setw(21)<<amount<<endl;
            }
        }
    return 0;
}
