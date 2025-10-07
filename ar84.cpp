#include <iostream>
using namespace std;
int arr(int a[],int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
int main()
{
    int i,f[5],size;
    cout<<"enter ele";
    for(i=0;i<size;i++)
    {
        cin>>f[i];
    }
    cout<<"sum= "<<arr(f);
}