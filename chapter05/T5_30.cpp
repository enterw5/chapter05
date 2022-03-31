/*FileName:T5_30.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 27,2022
Function: use switch loop to finish a global warming fact test*/
#include <iostream>

using namespace std;

int main()
{
    cout<<"first.global warmming is whether yes or not"<<endl;
    cout<<"1.almost yes.\n2.global climate is changing but the nation does't promise global warming.\n3.not.\n4.Te Langpu did't deny that global warmming."<<endl;
    cout<<"Please input your answer"<<endl;
    int arr[3];
    int c=0;
    for(int i=0;i<3;i++)
    cin>>arr[i];
    int arr1[3]={1,2,3};
    bool arraysEqual=true;
    int counter = 0;
    while(arraysEqual&&counter<3)
    {
        if(arr[counter]!=arr1[counter])
            arraysEqual=false;
        counter++;
    }
    if(arraysEqual)
        c++;
    cout<<"second.Is global warming caused by industrialization"<<endl;
    cout<<"1.almost yes.\n2.some people think that no.\n3.IPPC and Mile think is almost no.\n4.IPPC change their report about the cause."<<endl;
    cout<<"Please input your answer"<<endl;
    int arr2[4];
    for(int i=0;i<4;i++)
    cin>>arr2[i];
    int arr3[4]={1,2,3,4};
    bool arraysEqual1=true;
    int counter1 = 0;
    while(arraysEqual1&&counter1<4)
    {
        if(arr2[counter1]!=arr3[counter1])
            arraysEqual1=false;
        counter1++;
    }
    if(arraysEqual1)
        c++;
    cout<<"third.What impact will global warming have"<<endl;
    cout<<"1.Global warming will cause delayed marine disasters.\n2.Global warming will affect agricultural production. Climate warming is prone to natural disasters such as floods and droughts, which will increase the instability of agricultural production."
    <<"\n3.Global warming will cause more stable weather in North China Plain, and severe haze events occur frequently in winter."
    <<"\n4.Limiting  carbon dioxide emissions is tantamount to limiting energy consumption  and will have a restrictive impact on all countries of the world. Whether to reduce emissions in developing countries or in developed countries has become the focus of discussion."<<endl;
    int arr4[4];
    for(int i=0;i<4;i++)
    cin>>arr4[i];
    bool arraysEqual2=true;
    int counter2 = 0;
    while(arraysEqual2&&counter2<5)
    {
        if(arr4[counter2]!=arr3[counter2])
            arraysEqual2=false;
        counter2++;
    }
    if(arraysEqual2)
        c++;
     cout<<"four.Is low carbon the wrong choice"<<endl;
     cout<<"1.low carbon is almost no influence.\n2.The overall tone is low carbon.\n3.Low carbon is not to reverse the trend of global warming\n4.The Chinese government stands in the general direction of low carbon"<<endl;
     int arr5[4];
     for(int i=0;i<4;i++)
     cin>>arr5[i];
     bool arraysEqual3=true;
    int counter3 = 0;
    while(arraysEqual3&&counter3<5)
    {
        if(arr5[counter3]!=arr3[counter3])
            arraysEqual3=false;
        counter3++;
    }
    if(arraysEqual3)
        c++;
     cout<<"five.Causes of global warming"<<endl;
     cout<<"1.population explosion\n2.air pollution\n3.Forest resources have decreased sharply\n4.Deterioration of marine ecological environment"<<endl;
     int arr6[4];
     for(int i=0;i<4;i++)
     cin>>arr6[i];
     bool arraysEqual4=true;
    int counter4 = 0;
    while(arraysEqual4&&counter4<5)
    {
        if(arr6[counter4]!=arr3[counter4])
            arraysEqual4=false;
        counter4++;
    }
    if(arraysEqual4)
        c++;
        cout<<c<<endl;
     switch(c)
     {
         case 5:cout<<"Excellent"<<endl;break;
         case 4:cout<<"Very good"<<endl;break;
         case 3:
         case 2:
         case 1:
         case 0:cout<<"Time to brush up on your knowledge of global warming"<<endl;break;
         default :break;
     }
     cout<<" ai yang jiaoyu net"<<endl;
    return 0;
}
