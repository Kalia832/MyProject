#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int unit;
    float amount,extra;
    cout<<"\nEnter No. of Units consumed:";
    cin>>unit;
    if(unit>=0 && unit<=150)//if unit range form 0 to 150 per unit charge is 1 rupees.
    {
        amount=(unit*1)+75;
        cout<<"\nElectricity Charge:"<<amount-75<<"\nMeter charge: 75 added ="<<amount<<"\nPer unit charge 1 rupees";
    }
    else if(unit>=151 && unit<=250)//if unit range form 151 to 250 perunit charge is 2 rupees.
    {
        amount=(unit*2)+75;
        cout<<"\nElectricity Charge:"<<amount-75<<"\nMeter charge: 75 added = "<<amount<<"\nPer unit charge 2 rupees";
    }
    else//above 250 unit per unit charge is 3.
    {
        amount=(unit*3)+75;
        cout<<"\nElectricity Charge:"<<amount-75<<"\nMeter charge: 75 added = "<<amount<<"\nPer unit charge 3 rupees";
    }
    if(amount>300)
        {
            extra=((amount*12.50)/100);
            amount += extra;
            cout<<"\nService Charge of 12.5 percent is = "<<extra<<" Rupees";
        }
    cout<<"\n==--->>Total Amount= "<<amount<<" Rupees";
    cout<<"\n***( Pay now at my Tata Power app and get digital reward of 3% "<<"off = "<<((amount*3)/100)<<" )***";
    getch();
    return 0;
}