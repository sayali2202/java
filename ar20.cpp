#include <iostream>
using namespace std;
int main()
{
    int i,bill,qty,rate,total=0;
    for(i=1;i<=5;i++)
    {
        cout<<"enter prod rate="<<endl;
        cin>>rate;
        cout<<"enter prod qty"<<endl;
        cin>>qty;
        bill=rate*qty;
        cout<<"bill="<<bill<<endl;
        total=total+bill;
        cout<<"total bill="<<total<<endl;
        return 0;
    }
}