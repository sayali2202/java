#include <iostream>
#include <string.h>
using namespace std;
int main()
// length of string , substring , reversed substring , num of char in substring 
{
      string a="My name is Arnav. I live in Nagpur , I am studying in Ramdeobaba";
      int len,i;
      len=a.length();
      cout<<"Length of character= "<<len<<endl;
      for(i=0;i<=a.length();i++)
      cout<<a[i];
      cout<<endl;
      int count=0;
      char ch;
      cout<<"enter the character to find out its frequency"<<endl;
      cin>>ch;
      for(i=0;i<=a.length();i++)
      {
            if(ch==a[i])
            count++;                  
      }             
      
      cout<<"count= "<<count<<endl;
      string a1 =a.substr(18,50);
      cout<<"sub string= "<<a1<<endl;
      cout<<"Reversed array= "<<endl; 
      for(i=a.length();i>=0;i--)
      {
            cout<<a[i];
      }  
      cout<<endl;
      int len2;       
      len2=a1.length();
      cout<<"Number of characters in substring= "<<len2;
      return 0; 
}