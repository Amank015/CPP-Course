#include<iostream>
using namespace std;

int main()
{
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   cout<<"This is a largest number";

   if(a>b)
   {
    cout<<a;
   }
   else if (b>c)
   {
     cout<<b;
   }
   else if (c>d)
   {
      cout<<c;
   }
    else{
        cout<<d;
    }
       return 0;
    
}