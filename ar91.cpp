#include <iostream>
using namespace std;
float si(int p,int t,int r)
{
      return (0.01*p*t*r);                        
}
int main()
{
      int p,t,r,i;
      for(i=1;i<=5;i++)
      {
            cout<<"enter the principle,rate and intrest"<<endl;
            cin>>p>>t>>r;
            float simpinterest = si(p,t,r);
            cout<<"The simple interest is: "<<simpinterest<<endl;
      }                        
      return 0;
}