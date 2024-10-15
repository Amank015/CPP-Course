#include<iostream>
using namespace std;
//Function prototype
//type function-name (arguments);
//int sum(int a,  int b);//-->Acceptable
//int sum(int a,b);//-->Not accepatable
int sum(int , int);













int main()
{


int num1, num2;
cout<<"Enter first number"<<endl;
cin>>num1;
cout<<"Enter second number"<<endl;
cin>>num2;
cout<<"The sum is"<<sum(num1, num2);
// num1 and num2 are actual parameters and a and b are formal parameters.

    
    return 0;
}
int sum(int a, int b){
int c = a+b;
return c;

}