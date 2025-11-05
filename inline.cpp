#include<iostream>
using namespace std;
inline int square(int x)
{
    return x*x;
}
int main()
{
    int k1;
    k1=square(10);
    cout<<"square of 10 is :"<<k1<<endl;
}