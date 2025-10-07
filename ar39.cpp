#include <iostream>
using namespace std;
int main()
{
  int i,j,k=10;
  for(i=4;i>=1;i--)
  {
      for(j=1;j<=i;j++)
      {
         cout<<k<<"   ";
         k--; 
      }
      cout<<endl;
  }
}