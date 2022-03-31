/*FileName:T5_21.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 26,2022
Function:calculate the salary according to the code of each employee*/
#include <iostream>

using namespace std;

int main()
{
    cout<<"Please calculate the salary according to the code of each employee"<<endl;
    cout<<"choose 1,2,3,4,if end,please input others"<<endl;
    int code;
    cin>>code;
    while(1==code||2==code||3==code||4==code)
    {
        switch(code)
        {
            case 1:cout<<"Please input the same salary of week"<<endl;
                    int k;cin>>k;cout<<"the salary of this week is :"<<k<<endl;break;
            case 2:cout<<"Please input the work hours and fixed hour salary for a week"<<endl;
                    int h1,s1;cin>>h1>>s1;
                    if(h1<40)
                        cout<<s1*h1<<endl;
                    else cout<<"the salary of this week is :"<<s1*h1+(h1-40)*s1*1.5<<endl;break;
            case 3:cout<<"Please input the sales gross profit"<<endl;
                    int p;cin>>p;
                    cout<<"the salary of this week is :"<<250+p*0.057<<endl;break;
            case 4:cout<<"Please the fixed salary of every product and number of products"<<endl;
                   int f,n;
                   cin>>f>>n;
                   cout<<"the salary of this week is :"<<f*n<<endl;break;
            default:break;
        }
       cout<<"Please calculate the salary according to the code of each employee"<<endl;
       cout<<"choose 1,2,3,4,if end,please input others"<<endl;
       cin>>code;
    }
    return 0;
}
