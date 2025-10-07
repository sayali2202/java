#include <iostream>
using namespace std;
// recursive functional programming
void func(int num,int i)
{
     if(i<=10)
     {
          cout<<num*i<<"  ";
          func(num,i+1);// recursive function call again and again till count terminate
     }
     else
     {
          cout<<"finished"<<endl;
     }
}
int main()
{
     func(44,1);
     func(19,1);
     return 0;
}