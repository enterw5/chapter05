/*FileName:T5_6.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 25,2022
Function: integer averaging */
#include <iostream>

using namespace std;

int main()
{
    int a;
    int sum=0;
    int ave;
    int i;
    cin>>a;
    for( i=0;a!=9999;i++)
        {
        sum+=a;
        cin>>a;
        }
        ave=sum/i;
        cout<<"the average is :"<<ave<<endl;
    return 0;
}
