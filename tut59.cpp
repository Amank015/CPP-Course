#include<iostream>
using namespace std;
int main()
{
    int a[10],n;
    cout<<"Enter"<<""<<"number of an array";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Array is=\n";
    for( int i=0; i<n; i++)
    {
        cout<<a[i];
    }

    return 0;
}