#include <iostream>
using namespace std;
int main()
{
    int k=1;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<k<<"  ";
            if(k==1)
            k=0;
            else
            k=1;
         }
      cout<<endl;
     }
}