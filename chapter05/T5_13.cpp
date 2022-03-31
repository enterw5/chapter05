/*FileName:T5_13.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 25,2022
Function: enter five numbers in the range 1-30 and output corresponding pattern*/
#include <iostream>

using namespace std;

int main()
{
    int m;
    m=5;
    int a;
    for(int b=1;b<=m;b++)
    {
        cin>>a;
    for(int n=1;n<=a;n++)
        cout<<"*";
    cout<<endl;
    }
    return 0;
}
