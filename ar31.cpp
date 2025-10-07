#include <iostream>
using namespace std;
int main()
{
    int a=1,sum=0,input,i;
    cout<<"enter no. of input for terms you wish to take"<<endl;
    cin>>input;
    for(i=1;i<=input;i++)
    {
        cout<<a<<endl;
        sum=sum+a;
        a=(a*10)+1;
    }
    cout<<endl;
    cout<<"sum= "<<sum;
}