#include <iostream>
using namespace std;
int cube(int num)
{
     return (num*num*num);                                                       
}
int main()
{
     int number;
     cout<<"enter the number";
     cin>>number;
     int cb=cube(number);
     cout<<"the cube is= "<<cb;
     return 0;                         
}