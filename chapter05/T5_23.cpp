/*FileName:T5_23.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 26,2022
Function:use for loop to print diamond*/
#include <iostream>

using namespace std;

int main()
{
    for (int i=1;i<=9;i++)
    {
        if(i<=5)
        {
            for(int m=1;m<=(5-i);m++)
                cout<<" ";
            for(int n=1;n<=(2*i-1);n++)
                cout<<"*";
            for(int m=1;m<=(5-i);m++)
                cout<<" ";
                cout<<endl;
        }
        else
            {
            for(int m=1;m<=(i-5);m++)
            cout<<" ";
            for(int n=1;n<=(9-2*(i-5));n++)
                cout<<"*";
            for(int m=1;m<=(i-5);m++)
            cout<<" ";
            cout<<endl;
             }
    }
    return 0;
}
