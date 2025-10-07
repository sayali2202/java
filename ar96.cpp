#include <iostream>
using namespace std;
//Recursive print for the given array 0 and 1 for every 
//even= 0
//and odd=1   on the basis of remainder of the given array
void func(int a[],int size,int i)
{
     if(i<size)
     {
          if(a[i]%2==0)// 1,2,3,4,5,
          {
               a[i]=0;
          }
          else
          {
               a[i]=1;
          } 
          func(a,size,i+1);
     }                     
     else//this else is used to print the output using id statm
     {
          if(i<(size+size)) //1,2,3,4,5 is used for printing the output once the 
                           // uppercondition terminates 
          {
               cout<<a[i-size]<<"  ";  //index 5- size 5
               func(a,size,i+1);
          }
     }    
}
int main()
{
     int size;    //size is to define number of terms in array ex-5
     cout<<"Enter size of the array"<<endl;
     cin>>size;
     int a[size];

     for(int i=0;i<size;i++)
     {
          cin>>a[i];
     }
     func(a,sizeof(a)/sizeof(a[0]),0);
     return 0;
}
/*
5- size
1
2
3
4
5
1 0 1 0 1 */
// q- print 1 for any odd number in array and 0 for every even number in array