#include <iostream>
using namespace std;
int main()
{
    int a[5],i,target,rep;
    cout<<"Enter element for array"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];                      
    }
    cout<<"Enter element you want to remove from array"<<endl;
    cin>>target;
    cout<<"enter element you want to replace it with"<<endl;
    cin>>rep;
    for(i=0;i<5;i++)
    {
    if(a[i]==target)
    {
        a[i]=rep;                     
        cout<<"element "<<target<<" is replaced with "<<rep<<endl;
    }
    }
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}