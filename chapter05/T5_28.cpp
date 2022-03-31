/*FileName:T5_28.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 27,2022
Function: use two swith loop to print the song of The Twelve Days of Christmas*/
#include <iostream>

using namespace std;

int main()
{
    for(int s=1;s<=12;s++)
    {
    switch(s)
    {
        case 1:cout<<"first\t";break;
        case 2:cout<<"second\t";break;
        case 3:cout<<"third\t";break;
        case 4:cout<<"fourth\t";break;
        case 5:cout<<"fifth\t";break;
        case 6:cout<<"sixth\t";break;
        case 7:cout<<"seventh\t";break;
        case 8:cout<<"eighth\t";break;
        case 9:cout<<"ninth\t";break;
        case 10:cout<<"tenth\t";break;
        case 11:cout<<"eleventh\t";break;
        case 12:cout<<"twelfth\t";break;
        default :break;
    }
    switch(s)
    {
        case 1:cout<<"On the first day of Christmas my true love sent to me: \nA Partridge in a Pear Tree"<<endl;break;
        case 2:cout<<"On the second day of Christmas my true love sent to me: \nTwo Turtle Doves \nand a Partridge in a Pear Tree"<<endl;break;
        case 3:cout<<"On the third day of Christmas my true love sent to me: \nThree French Hens\n Two Turtle Doves\n and a Partridge in a Pear Tree"<<endl;break;
        case 4:cout<<"On the fourth day of Christmas my true love sent to me: \nFour Calling Birds*\nThree French Hens\n Two Turtle Doves\n and a Partridge in a Pear Tree"<<endl;break;
        case 5:cout<<"On the first day of Christmas my true love sent to me: \nFive Golden Rings\nFour Calling Birds\nThree French Hens\n Two Turtle Doves\n and a Partridge in a Pear Tree"<<endl;break;
        case 6:cout<<"On the first day of Christmas my true love sent to me: \nSix Geese a Laying\nFive Golden Rings\nFour Calling Birds\nThree French Hens\n Two Turtle Doves\n and a Partridge in a Pear Tree"<<endl;break;
        case 7:cout<<"On the first day of Christmas my true love sent to me: \nSeven Swans a Swimming\nSix Geese a Laying\nFive Golden Rings\nFour Calling Birds\nThree French Hens\n Two Turtle Doves\n and a Partridge in a Pear Tree"<<endl;break;
        case 8:cout<<"On the first day of Christmas my true love sent to me: \nEight Maids a Miking\nSeven Swans a Swimming\nSix Geese a Laying\nFive Golden Rings\nFour Calling Birds\nThree French Hens\n Two Turtle Doves\n and a Partridge in a Pear Tree"<<endl;break;
        case 9:cout<<"On the first day of Christmas my true love sent to me: \nNine Ladies Dancing\nEight Maids a Miking\nSeven Swans a Swimming\nSix Geese a Laying\nFive Golden Rings\nFour Calling Birds\nThree French Hens\n Two Turtle Doves\n and a Partridge in a Pear Tree"<<endl;break;
        case 10:cout<<"On the first day of Christmas my true love sent to me: \nTen Lords a Leaping\nNine Ladies Dancing\nEight Maids a Miking\nSeven Swans a Swimming\nSix Geese a Laying\nFive Golden Rings\nFour Calling Birds\nThree French Hens\n Two Turtle Doves\n and a Partridge in a Pear Tree"<<endl;break;
        case 11:cout<<"On the first day of Christmas my true love sent to me: \nEleven Pipers Piping\nTen Lords a Leaping\nNine Ladies Dancing\nEight Maids a Miking\nSeven Swans a Swimming\nSix Geese a Laying\nFive Golden Rings\nFour Calling Birds\nThree French Hens\n Two Turtle Doves\n and a Partridge in a Pear Tree"<<endl;break;
        case 12:cout<<"On the first day of Christmas my true love sent to me: \n12 Drummers Drumming\nEleven Pipers Piping\nTen Lords a Leaping\nNine Ladies Dancing\nEight Maids a Miking\nSeven Swans a Swimming\nSix Geese a Laying\nFive Golden Rings\nFour Calling Birds\nThree French Hens\n Two Turtle Doves\n and a Partridge in a Pear Tree"<<endl;break;
        default :break;
    }}
    return 0;
}
