#include<iostream>
using namespace std;
class Nbooks
{
    private:
    int ISB_no,ACC_no,pages;
    char book_name[50],author[50];
    float price;
    public:
    void getbookdetails();
    void displaybooks();
};
void Nbooks :: getbookdetails()
{
    cout<<"enter ISB_no:";
    cin>>ISB_no;
    cout<<"enter ACC_no:";
    cin>>ACC_no;
    cout<<"enter book_name:";
    cin>>book_name;
    cout<<"enter author name:";
    cin>>author;
    cout<<"enter the no of pages:";
    cin>>pages;
    cout<<"enter the price of the book:";
    cin>>price;
}
void Nbooks :: displaybooks()
{
    cout<<endl<<"BOOKS DETAILS"<<endl;
    cout<<"ISB_no"<<ISB_no<<endl;
    cout<<"ACC_no"<<ACC_no<<endl;
    cout<<"Book_name"<<book_name<<endl;
    cout<<"Author name:"<<author<<endl;
    cout<<"NO of pages:"<<pages<<endl;
    cout<<"price of the book:"<<price<<endl;
}
int main()
{
    Nbooks b[50];
    int i,n;
    cout<<"enter n:";
    cin>>n;
    for(i=0;i<=n;i++)
    b[i].getbookdetails();
    for(i=0;i<=n;i++)
    b[i].displaybooks(); 
}    
    