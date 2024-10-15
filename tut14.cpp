#include<iostream>
using namespace std;

//This will not swap a and b****
//
void swapPointer(int a, int b) //temp a b
{                      // 4   4   5
                       // 4   5   5
                       // 4   5   4
    int temp = a;
     a = b;
     b = temp;

}
//Call by reference using pointers
/*void swapPointer(int* a, int* b) //temp a b
{                      // 4   4   5
                       // 4   5   5
                       // 4   5   4
    int temp = *a;
     *a = *b;
     *b = temp;

}*/

//Call by reference using C++ reference Variables
int & swapReferenceVar(int &a, int &b) //temp a b
{                      // 4   4   5
                       // 4   5   5
                       // 4   5   4
    int temp = a;
     a = b;
     b = temp;
     return a;
}


int main()
{
    int x = 4, y = 5;

   // cout<<"The sum of 4 and 5 is"<<sum(4,5);
   cout<<"The value of x is"<<x<<"and the value of y is"<<endl;
  // swap(x, y);//This will not swap a and b***
  // swapPointer(&x, &y);
  //swapReferenceVar(x, y);
  swapReferenceVar(x, y) = 455;
   cout<<"The value of x is"<<x<<"and the value of y is"<<endl;








    return 0;
}