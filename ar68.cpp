#include <iostream>
#include <string.h>
using namespace std;
int main()
{
      char a[70];
      cout<<"Enter your name"<<endl;
      fgets(a,sizeof(a),stdin);
      cout<<"My name is "<<a;
      return 0;                        
}