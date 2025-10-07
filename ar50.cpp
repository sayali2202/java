#include <iostream>
using namespace std;
int main()
{
     int j=1,i,a[3],count=0;
     cout<<"Enter 3 num"<<endl;
     for(i=0;i<3;i++)
     {
          cin>>a[i];
     }
     for(i=0;i<3;i++)
     {
          count=0;
          while(j<=a[i])
          {
               count++;
          }          
          j++;
     }
     if(count==2)
     {
          cout<<"prime num"<<endl;
     }
     else
     {
          cout<<"not a prime num"<<endl;
     }
}