/*FileName:T5_8.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 25,2022
Function: find the smallest interger*/
#include <iostream>

using namespace std;

int main()
{
    int m;//m为整数个数
    cin>>m;
    int a;//a为输入的整数
    cin>>a;
    int b;//b为标记最小值的量
    b=a;
    int i;
    for(i=1;i<m;i++)
    {
        if(b<a)
        ;
        else b=a;
        cin>>a;
    }
    cout<<"the min is : "<<b<<endl;
    return 0;
}
