#include <iostream>
using namespace std;
int main()
{
     int a[10],n,i,j,x;
     cout<<"enter suze of array"<<endl;
     cin>>n;
     cout<<"enter elements of array"<<endl;
     for(i=0;i<n;i++)
     cin>>a[i];
     for(i=0;i<n;i++)
     {
         for(j=i+1;j<n;j++)
         {
              if(a[i]<a[j])
              {
                   x=a[i];
                   a[i]=a[j];
                   a[j]=x;            
              }                
         }                     
     }    
     cout<<"second largest number"<<a[1]<<endl;
     cout<<" second smallest number"<<a[n-2]<<endl;
     return 0;
}