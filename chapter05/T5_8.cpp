/*FileName:T5_8.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 25,2022
Function: find the smallest interger*/
#include <iostream>

using namespace std;

int main()
{
    int m;//mΪ��������
    cin>>m;
    int a;//aΪ���������
    cin>>a;
    int b;//bΪ�����Сֵ����
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
