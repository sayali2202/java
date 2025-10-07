#include <iostream>
using namespace std;
int main()
{
    //ARMSTRONG NUM
    int num,ld,temp,sum=0;
    cout<<"enter num"<<endl;
    cin>>num;
    temp=num;
    while(num>0)
    {
        ld=num%10;
        sum=sum+ld*ld*ld;
        num=num/10;
    }
    if(sum==temp)
    {
        cout<<"Armstrong num= "<<temp<<endl;
    }
    else
    {
        cout<<"NOT an Armstrong num "<<temp<<endl;
    }
}