#include <iostream>
using namespace std;
int main()
{
    int num,sume=0,ld;    
    cout<<"enter any num"<<endl;
    cin>>num;
    while(num>0)
    {
        ld=num%10;
        if(ld%2==0)
        {
            sume=sume+ld;
        }
        num=num/10;
    }
    cout<<"sum of all even digits="<<sume<<endl;
}