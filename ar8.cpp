#include <iostream>
using namespace std;
int main()
{
    //STRONG NUMBER
    int num,ld,fact=1,temp,sum=0;
    cout<<"enter any num"<<endl;
    cin>>num;
    temp=num;
    while(num>0)
    {
        ld=num%10;
        fact=1;
        while(ld>1)
        {
            fact=fact*ld;
            ld--;
        }
        num=num/10;
        sum=sum+fact;
    }
    if(sum==temp)
    {
    cout<<"It is a strong num"<<endl;
    }
    else
    {
    cout<<"It's not a strong num"<<endl;
    }
}