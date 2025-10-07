#include <iostream>
using namespace std;
int main()
{
    int i,a[5]={10,11,12,13,14},prode=1,prodo=1,sum;
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
             prode=prode*a[i];                 
        }                     
        else
        {
             prodo=prodo*a[i];                 
        } 
    }
    cout<<"product of even num= "<<prode<<endl;
    cout<<"product of odd num= "<<prodo<<endl;
    sum=prode+prodo;
    cout<<"Sum of both even and odd prod= "<<sum<<endl;
}