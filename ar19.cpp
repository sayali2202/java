#include <iostream>
using namespace std;
int main()
{
    int sal,inc,exp;
    cout<<"enter salary"<<endl;
    cin>>sal;
    cout<<"enter experience"<<endl;
    cin>>exp;
    if(exp<=2)
    {
        cout<<"No incentive"<<endl;
    }
    else if(exp>2 && exp<=5)
    {
        sal=sal+sal*0.098;
        cout<<"your incentive=9.8"<<endl;
        cout<<"your salary="<<sal<<endl;
    }
    else if(exp>5 && exp<=10)
    {
        sal=sal+sal*0.14;
        cout<<"your incentive=14"<<endl;
        cout<<"your salary="<<sal<<endl;
    }
    else if(exp>10 && exp<=20)
    {
        sal=sal+sal*0.27;
        cout<<"your incentive=27"<<endl;
        cout<<"your salary="<<sal<<endl;
    }
    else if(exp>20 && exp<=30)
    {
        sal=sal+sal*0.31;
        cout<<"your incentive=31"<<endl;
        cout<<"your salary="<<sal<<endl;
    }
    else
    {
        sal=sal+sal*0.35;
        cout<<"your incentive=35"<<endl;
        cout<<"your salary="<<sal<<endl;
    }
} 