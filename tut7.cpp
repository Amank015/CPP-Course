#include<iostream>
using namespace std;

//int c = 44;


int main()
{
   //**********************Build in data types*****************//

    //int a,b,c;
    //cout<<"enter the value of a:"<<endl;
    //cin>>a;
    //cout<<"enter the value of b:"<<endl;
    //cin>>b;
    //c = a+b;
    //cout<<"the sum is"<<c<<endl;
   // cout<<"the global c is"<<::c;

//*******************float, double,and long double Literals******************//

/*float d = 34.4;
long double e = 34.4;
cout<<"the size of 34.4f is"<<sizeof(34.4f)<<endl;
cout<<"the size of 34.4l is"<<sizeof(34.4l)<<endl;*/

//**************Reference Variables******************

//Rohan ----> Monty ------> Rohu ------>Dangerous coder

/*float x = 455;
float & y = x;
cout<<x<<endl;
cout<<y<<endl;*/

//**************Typecasting******************

int a = 45;
float b = 45.56;
double d = 34.444;
cout<<"the value of a is"<<(float)a;
cout<<"the value of b is"<<(int)b;

cout<<"the value of b is "<<(int)b<<endl;
cout<<"the value of b is"<<(int)b<<endl;

int c = int(b);

cout<<"the Expression is"<<a+b<<endl;
cout<<"the Expression is"<<a + int(b)<<endl;
cout<<"the Expression is"<<a + (int)b<<endl;

       return 0;
}