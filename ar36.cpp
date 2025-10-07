#include <iostream>
using namespace std;
int main()
{
    int space=4;
    for(int i=1;i<=4;i++)
    {
         for(int j=1;j<=space;j++)
         {
              cout<<"  ";
         }
         for(int k=1;k<=i;k++)
         {
              cout<<" * ";
         }
         cout<<endl;
         space--;
    }
    space=2;
    {
         for(int i=1;i<=3;i++)
         {
              for(int j=1;j<=space;j++)
              {
                  cout<<"   ";
              }
              for(int k=3;k>=i;k--)
              {
                  cout<<" * ";
              }
              cout<<endl;
              space++;
          }
    }
}
//             * 
//            *  * 
//           *  *  * 
//         *  *  *  * 
//           *  *  * 
//            *  * 
//              * 