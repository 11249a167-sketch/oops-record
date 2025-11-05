#include<iostream>
#include <iomanip>
using namespace std;
class EBBill
{
    private:
    int customer_id,units;
    char customerName[50],address[50];
    float amount;
    public:
    void getbilldetails();
    void displaybill();
    void calculateamount();
};    
void EBBill :: getbilldetails()
{
    cout<<"enter customer_id:";
    cin>>customer_id;
    cout<<" enter customerName:";
    cin>>customerName;
    cout<<"enter address:";
    cin>>address;
    cout<<"enter how many units used:";
    cin>>units;
}
void EBBill :: calculateamount()
{
    if(units<=100)
    amount=0;
    else if(units<=200)
    amount=(units-100)*2.25;
    else if(units<=400)
    amount=(100*2.25)+(units-200)*4.25;
    else if(units<=600)
    amount=(100*2.25)+(200*4.25)+(units-400)*6.25;
    else
    amount=(100*2.25)+(200*4.25)+(400*6.25)+(units-500)+9;
}
void EBBill :: displaybill()
{
    cout<<endl<<"***********************************"<<endl;
    cout<<"--------ELECTRICITY BILL-------------";
    cout<<endl<<"***********************************"<<endl;
    cout<<left<<setw(20)<<"customerid"<<":"<<customer_id<<endl;
    cout<<left<<setw(20)<<"customerName"<<":"<<customerName<<endl;
    cout<<left<<setw(20)<<"address"<<":"<<address<<endl;
    cout<<left<<setw(20)<<"units used"<<":"<<units<<endl;
    cout<<left<<setw(20)<<"amount"<<":"<<amount<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"----------THANK YOU--------------"<<endl;
    cout<<"---------------------------------";
} 
int main()
{
    EBBill B1;
    B1.getbilldetails();
    B1.calculateamount();
    B1.displaybill();
    return 0;
}


