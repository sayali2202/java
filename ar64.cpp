#include <iostream>
#include <string.h>
using namespace std;
int main()
{
      char a[50]="I study in first year";
      int len,i;
      for(i=0;i<25;i++)
      {
            cout<<a[i];                  
      } 
      len=strlen(a);
      cout<<"number of characters in string are "<<len;
      return 0;                       
}