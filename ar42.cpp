#include <iostream>
using namespace std;
int main()
{
    int i,sum=0,a[5]={10,20,30,40,50};
    for(i=0;i<5;i++)
    {
        sum+=a[i];
    }
    cout<<"Sum of all numbers= "<<sum;
}