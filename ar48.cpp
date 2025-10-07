#include <iostream>
using namespace std;
int main()
{
     int a[5],i,j;
     for(i=0;i<5;i++)
     {
          cout<<"enter the no to print table"<<endl;
          cin>>a[i];
          for(j=1;j<=10;j++)
          {
              cout<<j*a[i]<<"   ";   
          }
          cout<<endl;
     }
     return 0;
}