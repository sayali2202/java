#include <iostream>
using namespace std;
int main() //vertical pyramid
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }

    for(i=4;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}
//  * 
//  *  * 
//  *  *  * 
//  *  *  *  * 
//  *  *  *  *  * 
//  *  *  *  * 
//  *  *  * 
//  *  * 
//  * 