/*FileName:T5_18.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 31,2022
Function: convet decimal in the rang in 1 - 256 to binary,octal and hexadecimal*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout<<"decimal\tbinary\toctal\thexadecimal"<<endl;
    int num,s,c;
    for(int i=1;i<=256;i++)
    {
        num=i;
        c=0;
        cout<<dec<<i<<"\t";
        for(int m=8;m>=0;m--)
    {

        s=pow(2,m);
        if(num>=s)
        {cout<<"1";
        c=1;
         num=num-pow(2,m);
         }
         else if(c==1)
            cout<<"0";
    }
    cout<<"\t"<<oct<<i<<"\t"<<hex<<i<<endl;
    cout<<endl;
    }


    return 0;
}
