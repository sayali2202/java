#include <iostream>
using namespace std;
int main()
{//FIND MAX AND MIN NUM OF ARRAY
    int a[5]={12,11,78,94,4},i;
    for(i=0;i<5;i++)
    {
         if(a[0]<a[i])
         {
              a[0]=a[i];                
         }
    }
    cout<<"max num of array "<<a[0]<<endl;
    for(i=0;i<5;i++)
    {
         if(a[0]>a[i])
         {
              a[0]=a[i];                
         }
    }
    cout<<"min num of array "<<a[0]<<endl;
}