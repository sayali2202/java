#include <iostream>
using namespace std;
void func(int a)
//recurssion
{
      if(a<=20)
      {
            if(a%2==0)
                  cout<<"even= "<<a*a<<endl;
            else
                  cout<<"odd= "<<a*a*a<<endl;
            func(a+1);//function call
      }                        
}
int main()
{
      func(1);
      // cout<<"sum of even numbers= "<<func(1,0)<<endl;
}