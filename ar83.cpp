#include <iostream>
using namespace std;
int pri(int num)
// prime num
{
     int i=1,count=0;
     while(i<=num)
     {
         if(num%i==0)
         {
              count++;                   
         }             
         i++;
     }  
     return count;
}
int main()
{
     cout<<"prime num "<<pri(3)<<endl;
     cout<<"not a prime num "<<pri(10);
}