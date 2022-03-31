/*FileName:T5_32.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 31,2022
Function: caculate facebook user growth*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int year=1;
    double rate;
    double number=10.0;
    double amount;
    int r;
    cout<<"year"<<setw(21)<<"number"<<endl;
    for( r=2;r<=5;r++)
    {
        rate = 1.0 * r / 100;
        year=1;
        amount=0;
        while(amount<=25)
    {
        amount=number*pow(1.0+rate,year);
        year++;
        cout<<year-1<<setw(21)<<amount<<endl;
    }
    cout<<"output year : "<<year-1<<endl;

    }
    return 0;
}
