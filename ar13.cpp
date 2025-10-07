#include <iostream>
using namespace std;
int main()
{
    // FACTORIAL
    int num,fact=1;
    cout<<"enter the factorial="<<endl;
    cin>>num;
    while(num>1)
    {
        fact=fact*num;
        num--;
    }
    cout<<"factorial of the given number="<<fact<<endl;
}