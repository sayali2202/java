#include <iostream>
using namespace std;
int per(int s1,int s2,int s3,int s4,int s5)
{
     float total,p;
     total=s1+s2+s3+s4+s5;
     p=total*0.2;
     return p;
}
int main()
{
     cout<<"per= "<<per(75,45,68,78,42);
     return 0;                         
}