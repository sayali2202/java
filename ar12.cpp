#include <iostream>
using namespace std;
int main()
{
    int num,ld,rev=0,temp;
    cout<<"enter any num"<<endl;
    cin>>num;
    temp=num;
    while(num>0)
    {
        ld=num%10;
        rev=rev*10+ld;
        num/=10;
    }
    if(rev==temp)
    {
        cout<<"It is a pallindrome"<<endl;
    }
    else
    {
        cout<<"not a pallindrome"<<endl;
    }
}