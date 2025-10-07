#include <iostream>
using namespace std;
int main()
{
     int a[5]={15,68,47,11,24},i,avg,sum=0;
     for(i=0;i<5;i++)
     {
         sum=sum+a[i];
         avg=sum/5;
     }
     cout<<"Avg of all numbers= "<<avg<<endl;
}