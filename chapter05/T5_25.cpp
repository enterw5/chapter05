/*FileName:T5_25.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 26,2022
Function:make use of other test condition instead of break*/
#include <iostream>

using namespace std;

int main()
{
    unsigned int count;
    int m;
    m=0;
    for(count = 1;count <=10&&m==0;++count)
    {
        if(count == 4)
            m++;

        cout<<count<<" ";

    }
    cout<<"\nBroke out of loop at count = "<<count<<endl;
    return 0;
}
