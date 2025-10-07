#include <iostream>
using namespace std;
int main()
{//pyramid
    int i,j,k,space=5;
    for(i=1;i<=4;i++)//row
    {
        for(j=1;j<=space;j++)// space as per coloumn
        {
            cout<<"  ";
        }
        for(k=1;k<=i;k++)//print star column
        {
            cout<<" * ";
        }
        cout<<endl;
        space--;
    }
    return 0;
}
    //        *  
    //      *   * 
    //    *   *   * 
    //  *   *   *   * 