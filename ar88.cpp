#include <iostream>
using namespace std;
int area(int l,int b)
{
     return(l*b);                         
}
int main()
{
     int l,b;
     cout<<"Enter length and breadth"<<endl;
     cin>>l>>b;
     int ar=area(l,b);
     cout<<"area of your square is= "<<ar;
     return 0;
}