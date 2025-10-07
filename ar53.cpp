#include <iostream>
using namespace std;
int main()
{
    int a[5]={5,1,49,7,8},i,sum=0;
    for(i=0;i<5;i++)
    {
         sum=sum+a[i];
    }
    cout<<"sum of all num "<<sum<<endl;
    return 0;
}