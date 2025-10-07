#include <iostream>
using namespace std;
int main()
//find a specific num in array
{
    int a[5],target,i;
    cout<<"enter elmenys for array"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];                     
    }             
    cout<<"enter the element to search"<<endl;
    cin>>target;
    if(a[i]==target)
    {
        cout<<"element "<<target<<" is found in the array"<<endl;
    }            
    else
    {
        cout<<"element "<<target<<" is not found in the array"<<endl;
    }
    return 0;
}