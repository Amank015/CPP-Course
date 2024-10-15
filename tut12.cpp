#include<iostream>
using namespace std;


 //struct employee
//{
    
    /*int eid;
    char favChar;
    float salary;*/
//};




union money
{
    int rice;
    char car;
    float pounds;
};




int main()
{

   /* struct employee aman;
    struct employee ashwin;
    struct employee ayush;

    aman.eid = 1;
    aman.favChar = 'C';
    aman.salary = 1200000000000;
    cout<<"The value is"<<aman.salary<<endl;
    cout<<"The value is"<<aman.favChar<<endl;
    cout<<"The value is"<<aman.eid<<endl;*/


    
    /* union money m1;
     m1.rice = 34;
     cout<<m1.rice;
     m1.car = 'C';
     cout<<m1.car<<endl;*/


     enum Meal{breakfast, lunch, dinner};
     Meal m1 = breakfast;
     cout<<m1;

     Meal m2 = lunch;
     cout<<m2;

     Meal m3 = dinner;
     cout<<m3;
     /*cout<<breakfast;
     cout<<lunch;
     cout<<dinner;*/


     

        return 0;


}