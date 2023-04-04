#include <iostream>
#define NHIF 200.00
#define NSSF 80.00
# define SC 100.00
#include <iomanip>
using namespace std;

int main()
{
    float basic_sal=0.00,PAYE=0.00,gross_sal=0.00,net_pay=0.00,overtime=0.00;
    int oh;
    cout<<"Enter Employee's basic salary\n";
    cin>>basic_sal;
    cout<<"Enter employee's number of overtime hours\n";
    cin>>oh;
    if (oh=0)
    {
        basic_sal=gross_sal;
    }
    else
    { overtime=oh*50+(oh-50)*350;
    gross_sal=basic_sal+overtime

    if (gross_sal<9500)
    {
        PAYE=0.0*gross_sal;
    }
    if (gross_sal>=9500 && gross_sal<16000)
    {
        PAYE =0.03*gross_sal;
    }
     if (gross_sal>=16000 && gross_sal<25000)
    {
        PAYE =0.05*gross_sal;
    }
     if (gross_sal>=25000 && gross_sal<35000)
    {
        PAYE =0.08*gross_sal;
    }
     if (gross_sal>=35000 && gross_sal<40000)
    {
        PAYE =0.11*gross_sal;
    }
     if (gross_sal>=40000 && gross_sal<50000)
    {
        PAYE =0.12*gross_sal;
    }
     if (gross_sal>=50000)
    {
        PAYE =0.14*gross_sal;
    }
    }//end of else
    net_pay=gross_sal-(PAYE+NHIF+NSSF+SC);
    cout<<"Gross Pay" <<setw(15)<< "PAYE Amount" <<setw(15)<< "Net Pay"<<endl;
    cout<<gross_sal<<setw(15)<<PAYE<<setw(15)<<net_pay<<endl;
    return 0;
}
