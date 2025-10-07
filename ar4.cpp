#include <iostream>
using namespace std;
int main ()
{
    // Five sub marks and per
    int s1,s2,s3,s4,s5;
    float per,total,avg;
    cout<<"Enter the 5 sub marks"<<endl;
    cin>>s1>>s2>>s3>>s4>>s5;
    total=s1+s2+s3+s4+s5;
    per=total*0.2;
    avg=total/5;
    cout<<"Percent="<<per<<endl;
    cout<<"Total="<<total<<endl;
    cout<<"Average="<<avg<<endl;
    if(per<40)
    {
        cout<<"fail"<<endl;
    }
    else if(per>=40 && per<55)
    {
        cout<<"grade c"<<endl;
    }
    else if(per>=55 && per<70)
    {
        cout<<"grade b"<<endl;
    }
    else if(per>=70 && per<90)
    {
        cout<<"grade a"<<endl;
    }
    else
    cout<<"merit"<<endl;
}