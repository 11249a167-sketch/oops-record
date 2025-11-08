#include<iostream>
using namespace std;
class student
{
    private:
    int rno;
    char name[20];
    public:
    void getstudent()
    {
        cout<<"student name:";
        cin>>name;
        cout<<"student rollno:";
        cin>>rno;
    }
    void displaystudent()
    {
        cout<<"student name:"<<name<<endl;
        cout<<"student rollno:"<<rno<<endl;
    }
};
class test:public student
{
    protected:
    int math,eng,sci;
    public:
    void gettest()
    {
        getstudent();
        cout<<"maths subject marks:";
        cin>>math;
        cout<<"english subject marks:";
        cin>>eng;
        cout<<"science subject marks:";
        cin>>sci;
    }
    void displaytest()
    {
        displaystudent();
        cout<<"maths subject marks:"<<math<<endl;
        cout<<"english subject marks:"<<eng<<endl;
        cout<<"science subject marks:"<<sci<<endl;
    }
};
class result:public test
{
    private:
    int total,avg;
    public:
    void getresult()
    {
        gettest();
        total=math+eng+sci;
        avg=total/3;
    }
    void displayresult()
    {
        displaytest();
        cout<<"total marks:"<<total<<endl;
        cout<<"average marks:"<<avg<<endl;   
    }
};
int main()
{
    result r1;
    r1.getresult();
    r1.displayresult();
}