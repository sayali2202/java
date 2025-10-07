#include <iostream>
#include <string.h>
using namespace std;
int main()
{//Program for reversed string
      char a[50]=" ARNAV ";
      for(int i=strlen(a);i>=0;i--)
      {
            cout<<a[i];                  
      }                
      return 0;        
}