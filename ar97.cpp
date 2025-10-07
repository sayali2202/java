// Create a program using recursion in which you have to take 2 arrays
//  and have to sum up them into 3rd array and print it in reverse order
#include <iostream>
using namespace std;

void func(int a[],int b[],int size,int i,int c[])
{
     if(i<size)   
     {
          c[i]=a[i]+b[i];          //a[]={1,2,3,4,5}, b[]={6,7,8,9,10}
          func(a,b,size,i+1,c);
     }               
     else{
          cout<<"printing array in rev order "<<endl;
          for(int i=size-1;i>=0;i--)
          {
               cout<<c[i]<<" "<<endl;
          }
     }       
}
int main()
{
     int s[5];//a
     int p[5];//b
     int r[5];//c
     cout<<"enter the first array"<<endl;
     for(int i=0;i<5;i++)
     {
          cin>>s[i];// 1,2,3,4,5
     }
     cout<<"enter the second array "<<endl;
     for(int j=0;j<5;j++)
     {
          cin>>p[j]; //6,7,8,9,10
     }
     func(s,p,sizeof(s)/sizeof(s[0]),0,r);
}