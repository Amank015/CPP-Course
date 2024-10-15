#include<iostream>
using namespace std;
class a
{
    int a;
    public:
    void getA()
    {
        cout<<"Enter the first number";
        cin>>a;
    }
};
class b
{
    int b;
    public:
    void getB()
    {
        cout<<"Enter the second number";
        cin>>b;
    }
};
class c : public a,b;
{
    int c;
    public:
    void add()
    {
        c = a+b;
        cout<<a<<"+"<<b<<"="<<c;
    }
};

int main()
{
    c obj;
    obj.getA();
    obj.getB();
    obj.add();

    return 0;
}