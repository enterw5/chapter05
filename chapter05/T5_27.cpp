/*FileName:T5_27.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 26,2022
Function:make use of other test condition instead of continue*/
#include <iostream>

using namespace std;

int main()
{
    int s=0;
    for(unsigned int count = 1;count <= 10;++count)
    {
        if(count == 5)
            s++;
            if(s==0)
            {
                cout<<count<<" ";
            }
            s=0;
    }
    cout<<"\nUsed continue to skip printing 5"<<endl;
    return 0;
}
