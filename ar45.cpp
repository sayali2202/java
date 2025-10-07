#include <iostream>
using namespace std;
int main()
{
    int a[5]={11,12,13,14,15},i,sume=0,sumo=0;
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            sume+=a[i]*a[i];                  
        }                   
        else
        {
            sumo+=a[i]*a[i]*a[i];                  
        }
    }
    cout<<"sum of even sq num= "<<sume<<endl;
    cout<<"sum of odd cube num= "<<sumo<<endl;
}