#include<iostream>
using namespace std;
class students
{
    private:
    int rollno,m1,m2,m3,total;
    char name[50];
    float avg;
    public:
    void getdetails()
    {
        cout<<"enter rollno:";
        cin>>rollno;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter 3 marks :";
        cin>>m1>>m2>>m3;
    }
    void calculate()
    {
        total=m1+m2+m3;
        avg=total/3;
    }
    void display()
    {
        cout<<"name of the student:"<<name<<endl;
        cout<<"rollno of the student:"<<rollno<<endl;
        cout<<"mark 1:"<<m1<<endl;
        cout<<"mark2:"<<m2<<endl;
        cout<<"mark3:"<<m3<<endl;
        cout<<"total:"<<total<<endl;
        cout<<"average:"<<avg<<endl;
    }
};
int main()
{
    students s;
    s.getdetails();
    s.calculate();
    s.display();
}