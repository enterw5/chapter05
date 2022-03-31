/*FileName:T5_10.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 25,2022
Function: calculate the factorial of 1-5*/
#include <iostream>

using namespace std;

int main()
{
    //求20的阶乘可能出现超出范围的问题
    int product=1;
    cout<<"number\tproduct\t"<<endl;
    for(int i=1;i<=5;i++)
    {
        product=1;
        for(int m=1;m<=i;m++)
            product*=m;
            cout<<i<<"\t"<<product<<"\t"<<endl;
    }
    return 0;
}
