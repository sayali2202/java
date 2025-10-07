#include <iostream>
using namespace std;
int main()
{
    // product of odd num
    int num,ld,prod=1;
    cout<<"enter any num"<<endl;
    cin>>num;
    while(num>0)
    {
        ld=num%10;
        if(ld%2!=0)
        {
            prod=prod*ld;
            cout<<"prod="<<prod<<endl;
        }
        num=num/10;
    }
}