#include <iostream>
using namespace std;
int main()
{
    // reverse of single digits
    int a[5]={15,46,78,98,34},i,rev,temp,ld;
    for(i=0;i<5;i++)
    {
        rev=0;
        temp=a[i];
        while(temp>0)
        {   
            ld=temp%10;
            rev=rev*10+ld;
            temp=temp/10;  
        }
        a[i]=rev;                   
    }            
    for(i=0;i<5;i++)
    {    
        cout<<a[i]<<"  "; 
    }         
}