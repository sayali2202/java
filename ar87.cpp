#include <iostream>
using namespace std;
int sq(int num)                         
{
     return (num*num);                         
}
int main()
{
     int number;
     cout<<"enter number"<<endl;
     cin>>number;
     cout<<"Square of "<<number<<" is= "<<sq(number);
}