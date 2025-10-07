#include <iostream>
using namespace std;
int main()
{
    int l=10,i,j,k,space=4;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=space;j++)
        {
            cout<<" * ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<"  ";
            l--;
        }
        cout<<endl;
        space--;
    }
}
//  *  *  *  *   
//  *  *  *     
//  *  *       
//  *