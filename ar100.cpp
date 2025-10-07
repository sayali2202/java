#include <iostream>
using namespace std;
class demo
{
      public:
      int x=9,y=6,sub;
      public:
      int subt()
      {
            sub=x-y;
            return sub;
      }             
      int add()
      {
            return x+y;
      }           
      void a()
      {
            cout<<"Hi my name is arnav sajja"<<endl;
      }
};
int main()
{
      demo d;
      cout<<"x= "<<d.x<<endl;
      cout<<"y= "<<d.y<<endl;
      cout<<"sub= "<<d.subt()<<endl;
      cout<<"addition= "<<d.add();
      return 0;
}