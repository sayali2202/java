#include <iostream>
using namespace std;
int main()
{//REVERSE
    int num,ld,rev=0;
    cout<<"enter the num"<<endl;
    cin>>num;
    while(num>0)
    {
        ld=num%10;
        rev=rev*10+ld;
        num=num/10;
    }
    cout<<"rev="<<rev<<endl;
    return 0;
}