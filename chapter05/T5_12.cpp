/*FileName:T5_12.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 25,2022
Function: make use of the for loop to draw a pattern*/
#include <iostream>

using namespace std;

int main()
{
    //a
    for(int i=1;i<=10;i++)
    {
        for(int m=1;m<=i;m++)
            cout<<"*";
        cout<<endl;
    }

    //b
     for(int i=1;i<=10;i++)
    {
        for(int m=1;m<=(11-i);m++)
            cout<<"*";
        cout<<endl;
    }

    //c
     for(int i=1;i<=10;i++)
    {
        for(int m=1;m<i;m++)
            cout<<" ";
        for(int m=1;m<=(11-i);m++)
            cout<<"*";

        cout<<endl;
    }

    //d
    for(int i=1;i<=10;i++)
    {

        for(int m=1;m<=(10-i);m++)
            cout<<" ";
        for(int m=1;m<=i;m++)
            cout<<"*";
        cout<<endl;
    }

    //e
    for(int i=1;i<=10;i++)
    {
        for(int m=1;m<=i;m++)
            cout<<"*";
        for(int m=1;m<=(10-i);m++)
            cout<<" ";
            cout<<" ";
        for(int m=1;m<=(11-i);m++)
            cout<<"*";
        for(int m=1;m<i;m++)
            cout<<" ";
             cout<<" ";
        for(int m=1;m<i;m++)
            cout<<" ";
        for(int m=1;m<=(11-i);m++)
            cout<<"*";
             cout<<" ";
             for(int m=1;m<=(10-i);m++)
            cout<<" ";
        for(int m=1;m<=i;m++)
            cout<<"*";
        cout<<endl;
    }

    return 0;
}
