#include<iostream>
using namespace std;
class overloaded
{   
    int l,b,s;
    float r,bs,ht;
    public:
   void area(int s)
   {
    cout<<"Enter the area of square"<<area(s);
    cin>>s;
   }
   void area(int l,int b)
   {
    cout<<"Enter the area of rectangle"<<area(l,b);
    cin>>l>>b;
   }
   void area(float r)
   {
    cout<<"Enter the area of circle"<<area(r);
    cin>>r;
   }
   void area(float bs, float ht)
   {
    cout<<"Enter the area of triangle"<<area(bs,ht);
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
 overloaded obj;
 obj.area;
 obj.area;
 obj.area;
 obj.area;
 obj.put;

    return 0;

}