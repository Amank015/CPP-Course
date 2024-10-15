#include<iostream>
using namespace std;
class overload
{
    int s,l,b;
    float r,bs,ht;
    public:
    void area(int s)
    {
        cout<<"enter the squre of area"<<area(s);
        cin>>s;
    }
    void area (int l, int b)
    {
        cout<<"enter the area of rectangle" <<area(l,b);
        cin>>l>>b;
    }
    void area(float r)
    {
        cout<<"enter the area of circle"<<area(r);
        cin>>r;
    }
    void area(float bs, float ht)
    {
        cout<<"enter the base and height of triangle"<<area(bs,ht);
        cin>>bs>>ht;

    }
    void put()
    {
        return(s*s);
        return(l*b);
        return(3.14*r*r);
        return(bs*ht)/2;
    }
};

int main()
{
    overload obj;
    obj.area;
    obj.area;
    obj.area;
    obj.area;
    obj.put;
     
        return 0;
}