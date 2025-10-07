#include <iostream>
using namespace std;
int main()
{
    int a[3]={123,456,678},i,ld,rev=0;
    for(i=0;i<3;i++)
    {
        ld=a[i]%10;
        rev=rev*10+ld;
        a[i]=a[i]/10;
        cout<<"Reversed num= "<<rev<<endl;
    }
}