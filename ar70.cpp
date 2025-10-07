#include <iostream>
#include <string.h>
using namespace std;
int main()
{
      char a[50]="cout";
      char b[50];
      strcpy(b,a);
      cout<<"contains in a= "<<a<<endl;
      cout<<" contains are copied in b= ";
      puts(b);
      return 0;                       
}