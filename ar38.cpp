#include <iostream>
using namespace std;
int main()
{
  int i,j;
  for(i=1;i<=4;i++)
  {
      for(j=1;j<=i;j++)
      {
          cout<<" * ";
      }
      cout<<endl;
  }
  for(i=5;i>=1;i--)
  {
      for(j=1;j<=i;j++)
      {
          cout<<" * ";
      }
      cout<<endl;
  }                             
}