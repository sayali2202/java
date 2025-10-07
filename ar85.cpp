#include <iostream>
using namespace std;
int areasq(int side)
{
     return(side*side); 
}
int main()
{
     int num;
     cout<<"enter the number"<<endl;
     cin>>num;
     int arsq = areasq(num);
     cout<<"The area of the aquare is= "<<arsq;
     return 0;                         
}