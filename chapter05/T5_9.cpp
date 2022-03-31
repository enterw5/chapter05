/*FileName:T5_9.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 25,2022
Function: calculate the product of integers 1-15 odd numbers */
#include <iostream>

using namespace std;

int main()
{
    int product;
    product=1;
    int i=1;
    for(;i<=15;i+=2)
    {
        product*=i;
    }
    cout<<"the product is : "<<product<<endl;
    return 0;
}
