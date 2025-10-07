#include <iostream>
using namespace std;
int sum(int s1,int s2,int s3,int s4, int s5)
{
     int total;
     total=s1+s2+s3+s4+s5;
     return total;                         
}
int main()
{
     cout<<"sum= "<<sum(12,86,79,4,12)<<endl;     
     return 0;                    
}