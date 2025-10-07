#include <iostream>
using namespace std;
int main()
{
    int num,ld,sum=0;
    cout<<"enter any num"<<endl;
    cin>>num;
    while(num>0)
    {
        ld=num%10;
        sum=sum+ld;
        num=num/10;
    }
    cout<<"sum of all digits="<<sum<<endl;
}