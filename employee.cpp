#include<iostream>
using namespace std;
class Employee
{
    private:
    int Eno,uan,basicpay,da,hra,epf,gpay,totded,netpay,ptax;
    string name,dept,design,bankno,pan,ifsc;
    public:
    void getdetails()
    {
        cout<<"enter name:";
        cin>>name;
        cout<<"enter employe number:";
        cin>>Eno;
        cout<<"enter department:";
        cin>>dept;
        cout<<"enter designation:";
        cin>>design;
        cout<<"enter PAN:";
        cin>>pan;
        cout<<"enter UAN:";
        cin>>uan;
        cout<<"enter bank no:";
        cin>>bankno;
        cout<<"enter Basicpay:";
        cin>>basicpay;
        cout<<"enter IFSC code:";
        cin>>ifsc;
    } 
    void calculate()
    {
        da=basicpay/100*80;
        hra=basicpay/100*10;
        epf=(basicpay+da)/100*12;
        ptax=basicpay/100*2;
        gpay=basicpay+da+hra;
        totded=epf+ptax;             
        netpay=gpay-totded;
    }
    void display()
    {
        cout<<"PAYSLIP"<<endl;
        cout<<"Empolyee name:"<<name<<endl;
        cout<<"Empolyee number:"<<Eno<<endl;
        cout<<"Department:"<<dept<<endl;
        cout<<"Designation:"<<design<<endl;
        cout<<"PAN no:"<<pan<<endl;
        cout<<"UAN no:"<<uan<<endl;
        cout<<"Bank no:"<<bankno<<endl;
        cout<<"BasicPay:"<<basicpay<<endl;
        cout<<"IFSC CODE:"<<ifsc<<endl;
        cout<<"Daily Allowance:"<<da<<endl;
        cout<<"House rent Allowance:"<<hra<<endl;
        cout<<"Empolyee's provident fund:"<<epf<<endl;
        cout<<"Professional Tax:"<<ptax<<endl;
        cout<<"GPAY:"<<gpay<<endl;
        cout<<"Total deduction:"<<totded<<endl;
        cout<<" NETPAY:"<<netpay<<endl;
    }    
};
int main()
{
    Employee e;
    e.getdetails();
    e.calculate();
    e.display();
}
