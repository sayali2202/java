#include <iostream>
using namespace std;
int main()
{
    //PRIME NUMBER
    int num,i=1,count=0;
    cout<<"enter any num"<<endl;
    cin>>num;
    while(i<=num)
    {
        if(num%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==2)
    {
        cout<<"prime num="<<num<<endl;
    }
    else
    {
        cout<<"Not a prime num="<<num<<endl;
    }
}