#include<iostream>
using namespace std;

class Employee
{
    private:

    int a,b,c;

    public:
    int e,f;
    void setdata(int a1,int b1,int c1); //Declaration
    void getdata()
    {
        cout<<"The value of a is"<<a<<endl;
        cout<<"The value of b is"<<b<<endl;
        cout<<"The value of c is"<<c<<endl;
        cout<<"The value of e is"<<e<<endl;
        cout<<"The value of f is"<<f<<endl;
        


    }
};

void Employee :: setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee aman;
    aman.e = 36;
    aman.f = 45;
    aman.setdata(1,2,3);
    aman.getdata();





    return 0;
}