#include<iostream>
using namespace std;
class Time
{
    private:
    int hrs,mins;
    public:
    void gettime();
    void addtime(Time x1,Time x2);
    void display();
};
void Time :: gettime()
{
    cout<<"enter the hours:";
    cin>>hrs;
    cout<<"enter the minutes:";
    cin>>mins;
}
void Time:: addtime(Time x1,Time x2)
{
    mins= x1.mins+x2.mins;
    hrs= mins/60;
    mins=mins%60;
    hrs=hrs+x1.hrs+x2.hrs;
}
void Time :: display()
{
    cout<<"hours:"<<hrs<<endl;
    cout<<"minutes:"<<mins<<endl;
}
int main()
{
    Time T1,T2,T3;
    T1.gettime();
    T2.gettime();
    T3.addtime(T1,T2);
    T1.display();
    T2.display();
    T3.display();
}
 
