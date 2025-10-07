#include <iostream>
using namespace std;
int main()
{
    int a=9,sum=0,input,i;
    cout<<"enter no. of degits place you wish to take"<<endl;
    cin>>input;
    for(i=1;i<=input;i++)
    {
         cout<<a<<endl;
         sum=sum+a;
         a=(a*10)+9;
    }
    cout<<"sum= "<<sum;
}