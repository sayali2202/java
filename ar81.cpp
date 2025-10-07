#include <iostream>
using namespace std;
int reve(int a)
{
     int rev=0,ld;
     while(a>0)
     {
          ld=a%10;
          rev=rev*10+ld;
          a=a/10;                    
     }
     return rev;                         
}
int main()
{
     cout<<"rev= "<<reve(12345);                         
}