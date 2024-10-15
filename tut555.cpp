#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the number";
    cin>>a>>b>>c;
     if(c>a)
     {
        if(c>b)
        {
            cout<<a;
        }
     
     else{
        cout<<c;
     }
     }
     else{
        if(a>b)
        {
            cout<<a;
        }
        else{
            cout<<b;
        }
     }
    

       return 0;
}