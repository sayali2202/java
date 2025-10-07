#include <iostream>
using namespace std;
int main()
{
    int a[10],n,i,sum=0,prod=1;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    cout<<"enter the elements of array"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        prod*=a[i];
    }
    cout<<"sum of array elements= "<<sum<<endl;
    cout<<"products of array elements= "<<prod<<endl;
    return 0;
}