/*FileName:T5_5.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 25,2022
Function: enter the number of integers and calculate the sum of these numbers */
#include <iostream>

using namespace std;

int main()
{
    int m;
    cin>>m;
    int num;
    int sum;
    sum=0;
    for(int i=1;i<=m;i++)
    {
        cin>>num;
        sum+=num;
    }
    cout<<"sum is :"<<sum<<endl;
    return 0;
}
