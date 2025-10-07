#include <iostream>
using namespace std;
int pro(int p1,int p2,int p3,int p4,int p5,int p6)
{
     int tot,dis;
     tot=p1*p2+p3*p4+p5*p6;
     dis=tot-tot*0.02;
     return dis;                       
}
int main()
{
     cout<<"bill= "<<pro(12,4,56,5,45,4);        
}