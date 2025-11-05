#include<iostream>
using namespace std;
class unaryop
{
    private:
    int x,y,z;
    public:
    unaryop()
    {
        x=0,y=0,z=0;
    }
    unaryop(int a,int b,int c)
    {
        x=a,y=b,z=c;
    }
    void display()
    {
        cout<<"\n\t"<<x<<" "<<y<<" "<<z;
    }
    void operator -();
};
void unaryop::operator -()
{
    x=-x,y=-y,z=-z;
}
int main()
{
    unaryop un(14,23,-56);
    cout<<"\n\n numbers are ::";
    un.display();
    -un;
    cout<<"\n\n numbers are after overloaded minus(-) operator ::\n";
    un.display();
}