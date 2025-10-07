#include <iostream>
using namespace std;
int main()
{
       int k=1;
       for(int i=1;i<=5;i++)
       {
           for(int j=1;j<=i;j++)
           {
               if((i%2)==0)
               {
                   k=1;
               }
               else
               {
                   k=0;
               }
               cout<<k<<"   "; 
           }
       cout<<endl;
       }
}