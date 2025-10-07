#include <iostream>
#include <string.h>
using namespace std;
int main()
{
      int length;
      char a[100]="I am Indian I love my country";
      char b[50]="I respect my country";
      cout<<"result= "<<strcat(a,b)<<endl;
      length=strlen(a);
      cout<<"length of a "<<strlen(a)<<endl;
      
// to find frequency
      int i,count=0;
      char ch;
      cout<<"enter the character to find out the frequency"<<endl;
      cin>>ch;
      for(i=0;i<=strlen(a)-1;i++)
      {
           if(ch==a[i])
           count++;                   
      }            
      cout<<"count= "<<count;
      return 0;            
}