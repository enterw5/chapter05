/*FileName:T5_24.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 26,2022
Function:input a number and use for loop to print corresponding diamond*/
#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    if(num>=1&&num<=19)
    {
    for (int i=1;i<=num;i++)
    {
        if(i<=(num/2+1))
        {
            for(int m=1;m<=(num/2+1-i);m++)
                cout<<" ";
            for(int n=1;n<=(2*i-1);n++)
                cout<<"*";
            for(int m=1;m<=(num/2+1-i);m++)
                cout<<" ";
                cout<<endl;
        }
        else
            {
            for(int m=1;m<=(i-(num/2+1));m++)
            cout<<" ";
            for(int n=1;n<=(num-2*(i-(num/2+1)));n++)
                cout<<"*";
            for(int m=1;m<=(i-(num/2+1));m++)
            cout<<" ";
            cout<<endl;
             }
    }
    }
    else cin>>num;
    return 0;
}

