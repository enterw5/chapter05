/*FileName:T5_20.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 26,2022
Function: find the three sides less than 500 of a right triangle*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int m ,n,p;
    for(int side1=1;side1<=500;side1++)
    {
        m=pow(side1,2);
        for(int side2=1;side2<=500;side2++)
        {
            n=pow(side2,2);
            for(int hypotenuse=2;hypotenuse<=500;hypotenuse++)
            {
                p=pow(hypotenuse,2);
                if((side1+side2)>hypotenuse)
                    if((m+n)==p)
                    cout<<"side1\tside2\hypotenuse\n"<<side1<<"\t"<<side2<<"\t"<<hypotenuse<<"\t"<<endl;
            }
        }
    }
    return 0;
}
