#include <iostream>
using namespace std;
float areatri(float b,float h)
{
      return (0.5*b*h);                        
}
int main()
{
      int b,h;
      cout<<"enter the base and height "<<endl;
      cin>>b>>h;
      cout<<"the area of triangle is "<<areatri(b,h);
      return 0;
}