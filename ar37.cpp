#include <iostream>
using namespace std;
int main()
{
    int l=10;
    int space=10;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=space;j++)
        {
            cout<<"   ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<l<<"   ";
            l--;
        }
        cout<<endl;
        space--;
    }
}
    //          10   
    //         9   8   
    //      7   6   5   
    //   4    3    2    1   