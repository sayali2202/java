#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no: ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=2*n;i++)
    {
        if(i%2==0)
        {
           cout<<i<<endl;
           sum+=i;
        }
     }
     cout<<"sum : "<<sum<<endl;
}
// enter the no: 5
// 2
// 4
// 6
// 8
// 10
// sum : 30