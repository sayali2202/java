#include <iostream>
using namespace std;
float areacir(int r)
{
      return (3.14*r*r);                        
}
int main()
{
      int r;
      cout<<"enter the value of r "<<endl;
      cin>>r;
      cout<<"The area of circle is= "<<areacir(r);
      return 0;
}