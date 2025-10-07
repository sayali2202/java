#include <iostream>
using namespace std;
int main()
{
   int i,ld,sum,a[5],temp;
   cout<<"enter 5 num"<<endl;
   for(i=0;i<5;i++)
      {
         cin>>a[i];
      }
      for(i=0;i<5;i++)
      {
         temp=a[i];
         sum=0;
         while(temp>0)
            {
               ld=temp%10;
               sum=sum+ld*ld*ld;
               temp=temp/10;
            }
            if(sum==a[i])
            {
               cout<<a[i]<<" =Armstrong num"<<endl;
            }
            else
            {
               cout<<a[i]<<" =NOT an Armstrong num"<<endl;
            }
   }
}