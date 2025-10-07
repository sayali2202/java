#include <iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<"  ";
        }
        cout<<endl;
    }
}
// 1  2  3  4  
// 1  2  3  
// 1  2  
// 1 