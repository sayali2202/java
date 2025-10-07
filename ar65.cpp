#include <iostream>
#include <string.h>
using namespace std;
int main()
{
      char a[]="I have completed C language at s.s. computers";
      int len=strlen(a);
      cout<<"length of character is "<<len<<endl;
      for(int i=0;i<strlen(a);i++)
      {
           cout<<a[i];                   
      }               
      return 0;         
}