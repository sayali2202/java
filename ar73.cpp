#include <iostream>
#include <string.h>
using namespace std;
int main()
{
      string s1="welcome to s.s. computers";
      string s2= s1.substr(10,19);
      cout<<"Original string "<<s1<<endl;
      cout<<"Substring from index 10 to froward 19= "<<s2;
      return 0;
}