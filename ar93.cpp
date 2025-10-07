#include <iostream>
using namespace std;
void demo(int num)
{
     if(num%2==0)
     cout<<" Num is even"<<endl;
     else
     cout<<"Num is odd"<<endl;                         
}
int main()
{
     int i,num;
     for(i=1;i<=5;i++)
     {
         cout<<"enter num- ";
         cin>>num; 
         demo(num);                   
     }                 
}