#include<iostream>
using namespace std;

int main()
{ 
    //Pointer in C++//

    int a =3;
    int * b = &a;
    //&--> (Address of) operator
    cout<<"The address of a is"<<&a<<endl;
    cout<<"The address of a is"<<b<<endl;
    //* ---> (value at) Dereference operator
    cout<<"The value at address of b is"<<*b<<endl;

// Pointer to pointer**********
   int ** c = &b;
   cout<<"the address of b is"<<&b<<endl;
   cout<<"the address of b is"<<c<<endl;
   cout<<"the value at address c is"<<*c<<endl;
   cout<<"the value at address value_at(value_at(c)) is"<<*c<<endl;











    
    return 0;

}