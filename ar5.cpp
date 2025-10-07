#include <iostream>
using namespace std;
int main()
{
    // if else electric bill
    float unit,bill,penalty,tbill;
    cout<<"enter electric unit consumes"<<endl;
    cin>>unit;
    if(unit>0 && unit<=100)
    {
        bill=unit*4.50;
        cout<<"bill="<<bill<<endl;
    }
    if(unit>100 && unit<=200)
    {
        bill=unit*5.35;
        cout<<"bill="<<bill<<endl;
    }
    else if(unit>200 && unit<=300)
    {
        bill=unit*8.10;
        penalty=bill*0.08;
        tbill=bill+penalty;
        cout<<"bill="<<bill<<endl;
        cout<<"penalty="<<penalty<<endl;
        cout<<"total bill="<<tbill<<endl;
    }
    else
    {
        cout<<"tbill="<<tbill<<endl;
    }
}