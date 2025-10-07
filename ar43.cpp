#include <iostream>
using namespace std;
int main()
{
    int a[5]={2,3,4,4,5},prod=1,i;
    for(i=0;i<5;i++)
    {
        prod=prod*a[i];
    }
    cout<<"Product of all num= "<<prod<<endl;
}