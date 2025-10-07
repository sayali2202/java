#include <iostream>
using namespace std;
void func(int a[],int fact,int size,int i,int num)
{
     if(i<size)
     {
          if(num<=a[i])
          {
               fact=fact*num;
               func(a,fact,size,i,num+1);
          }
          else
          {
               cout<<"fatorial of "<<a[i]<<" is=  "<<fact<<endl;
               func(a,1,size,i+1,1);
          }
     }
}
int main()
{
     int a[5];
     cout<<"Enter the array elements"<<endl;
     for(int i=0;i<5;i++)
     {
          cin>>a[i];
     }
     func(a,1,sizeof(a)/sizeof(a[0]),0,1);
     return 0;
}