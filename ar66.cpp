#include <iostream>
#include <string.h>
using namespace std;
int main()
{
      char a[50];
      cout<<"Enter string"<<endl;
      fgets(a,sizeof(a),stdin);
      cout<<"My name is "<<a;
      cout<<"length of string is "<<strlen(a)<<endl;
      puts(a);
      return 0;                        
}