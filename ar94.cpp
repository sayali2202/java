#include <iostream>
using namespace std;//wrap to find weather both the array contain same elem or not 
void f(int num[],int num2[])
{
    int count=0;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
    {
        if(num[i]==num2[j])
        {
            count++;
            break;         
        }              
    }                   
    }                    
    if(count==6)
    {
        cout<<"equal"<<endl;
    }    
    else
    {
        cout<<"not equal"<<endl;                      
    }
}
int main()
{
    int num1[6];
    for(int i=0;i<6;i++) 
    {
         cin>>num1[i];                     
    }                 
    int num2[6];
    for(int i=0;i<6;i++)
    {
         cin>>num2[i];                     
    }        
    f(num1,num2);
}