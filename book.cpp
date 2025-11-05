#include<iostream>
#include<iomanip>
using namespace std;
class book
{
    private:
    int pages,ISB_no,ACC_no;
    char book_name[50],author[50];
    float price;
    public:
    void getbookdetails()
    {
        cout<<"enter ISB_no:";
        cin>>ISB_no;
        cout<<"enter ACC_no:";
        cin>>ACC_no;
        cout<<"enter book_name:";
        cin>>book_name;
        cout<<"enter author name:";
        cin>>author;
        cout<<"enter no of pages:";
        cin>>pages;
        cout<<"enter price of the book:";
        cin>>price;
    }
    void displaybook()
    {
        cout<<endl<<"[[[[[["<<endl;
        cout<<endl<<right<<setw(20)<<"-----BOOK DETAILS-----"<<endl;
        cout<<right<<setw(20)<<"ISB_no"<<":"<<ISB_no<<endl;
        cout<<right<<setw(20)<<"ACC_no"<<":"<<ACC_no<<endl;
        cout<<right<<setw(20)<<"book_name"<<":"<<book_name<<endl;
        cout<<right<<setw(20)<<"author name:"<<":"<<author<<endl;
        cout<<right<<setw(20)<<"no of pages"<<":"<<pages<<endl;
        cout<<right<<setw(20)<<"price of the book"<<":"<<price<<endl;
        cout<<endl<<"                                                 ]]]]]]"<<endl;
    }
};
int main()
{
    book b;
    b.getbookdetails();
    b.displaybook();
    return 0;
}