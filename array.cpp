#include<iostream>
using namespace std;

int main()
{
     int marks[4] = {23, 45, 56, 89};
    int mathmarks[4];
    mathmarks[0] = 120;
    mathmarks[1] = 125;
    mathmarks[2] = 451;
    mathmarks[3] = 845;
    
    
    
    
    
    
    
    
    cout<<"These are math marks"<<endl;
     cout<<mathmarks[0]<<endl;
     cout<<mathmarks[1]<<endl;
     cout<<mathmarks[2]<<endl;
     cout<<mathmarks[3]<<endl;

    
    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
     cout<<marks[1]<<endl;

     // you can change the value of an array********

     marks[2] = 320;
     cout<<marks[2]<<endl;
     cout<<marks[3]<<endl;

   for (int i = 0; i < 4; i++)
   {
      cout<<"the value of marks"<<i<<" is "<<marks[i]<<endl;
   }
   
    

   //Pointers and arrays*******

   int * p = marks;
   cout<<*(p++)<<endl;
   cout<<*(++p)<<endl;
  /* cout<<"The value of *p is"<<*p<<endl;
   cout<<"The value of *(p+1) is"<<*(p+1)<<endl;
   cout<<"The value of *(p+2) is"<<*(p+2)<<endl;
   cout<<"The value of *(p+3) is"<<*(p+3)<<endl;*/
   





    return 0;
}