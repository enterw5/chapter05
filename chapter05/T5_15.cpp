/*FileName:T5_15.cpp
Author:liumengdi
E-mail:1771314862@qq.com
Time:Mar. 26,2022
Function: modify the program to calculate the average score of a set of data*/
 #include <iostream>
#include <string>

using namespace std;
class GradeBook
{
public:
    explicit GradeBook(std::string);
    void setCourseName(std::string);
    std::string getCourseName()const;
    void displayMessage()const;
    void inputGrades();
    void displayGradesReport()const;
private:
    std::string courseName;

};

GradeBook::GradeBook(string name)

    {
        setCourseName(name);
    }
    void GradeBook::setCourseName(string name)
    {
        if(name.size()<=25)
            courseName=name;
        else
        {
            courseName=name.substr(0,25);
            cerr<<"Name\""<<name<<"\"exceeds maximum length (25).\n"
            <<"Limiting courseName to first 25 character.\n"<<endl;
        }
    }

    string GradeBook::getCourseName()const
    {
        return courseName;
    }


    void GradeBook::displayMessage()const
    {
        cout<<"Welcome to the grade book for \n"<<getCourseName()<<"!\n"<<endl;
    }
    void GradeBook::inputGrades()
    {
        int grade;
        int sum=0;
        int ave;
        int counter=0;
        cout<<"Enter the number grades."<<endl
        <<"Enter the EOF character to end input."<<endl;

        cin>>grade;
    while(grade!=-1)
        {
        sum+=grade;
        counter++;

        cin>>grade;
        }
        ave=sum/counter;

        switch(ave)
        {
       case 4:
              cout<<"A"<<endl;
               break;

           case 3:
               cout<<"B"<<endl;
               break;
           case 2:
               cout<<"C"<<endl;
               break;
           case 1:
               cout<<"D"<<endl;
               break;
           case 0:
               cout<<"F"<<endl;
               break;

           default:

            break;
        }
        }




    int main()
    {
        GradeBook myGradeBook("CS101 C++ Programing");

        myGradeBook.displayMessage();
        myGradeBook.inputGrades();


    }









