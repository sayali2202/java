#include <iostream>
using namespace std;
int main()
{
    int num,i=1,sum=0;
    cout<<"enter the num"<<endl;
    cin>>num;
    while(i<=num/2)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    if(sum==num)
    {
        cout<<"It is a perfect num="<<num<<endl;
    }
    else
    {
        cout<<"It is not a perfect num="<<num<<endl;
    }
}