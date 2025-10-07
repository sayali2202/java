#include <iostream>
using namespace std;
int main()
{
    int num,ld;
    cout<<"enter any num"<<endl;
    cin>>num;
    while(num>0)
    {
        ld=num%10;
        if(ld%2==0)
        {
            cout<<"Sq of even digits="<<ld*ld<<endl;
        }
        num=num/10;
    }
}