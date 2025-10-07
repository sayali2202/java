#include <iostream>
using namespace std;
int main()
{
   int j=1,i,a[3]={11,34,5},count=0;
     for(i=0;i<3;i++)
     {
          if(a[i]%j==0)
          {
               count++;
          }
          j++;
          if(count==2)
          {
               cout<<"Prime num= "<<a[i]<<endl;
          }
          else
          {
               cout<<"Not a prime num= "<<a[i]<<endl;
          }
     }
}