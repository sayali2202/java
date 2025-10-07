#include <iostream>
using namespace std;
class demo
{
      public :
      int sum,subt,mult;
      float divi;
      void display()
      {
            cout<<"Arrthmatic calculation"<<endl;
      }
      void add(int a,int b)
      {
            sum=a+b;
            cout<<"sum= "<<sum<<endl;
      }
      void sub(int a,int b)
      {
            subt=a-b;
            cout<<"sun= "<<subt<<endl;
      }
      void multi(int a,int b)
      {
            mult=a*b;
            cout<<"myltiply= "<<mult<<endl;
      }
      void div(int a,int b)
      {
            divi=a/b;
            cout<<"division= "<<divi<<endl;
      }
};
int main()
{
      demo d;
      d.display();
      d.add(45,35);
      d.sub(45,25);
      d.multi(5,35);
      d.div(45,5);
      return 0;
}