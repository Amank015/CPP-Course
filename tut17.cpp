#include<iostream>
using namespace std;

int add(float a, int b){
    cout<<"Using function with 2 arguments "<<endl;
    return a+b;
}
int add(int a, int b, int c)
{
    cout<<"Using function with 3 arguments "<<endl;
    return a+b+c;
}
// Calculate the volume of cylinder
int volume(double r, int h)
{
    return(3./14 * r * r * h);
}
// Calculate the volume of a cube
int volume(int a)
{
    return a*a*a;
}
// Rectangular box
int volume(int l, int b, int h)
{
    return(l*b*h);
}
int main()
{

    //cout<<"The add of 3 and 6 is "<<add(3,6)<<endl;
    //cout<<"The add of 3, 6 and 9 is "<<add(3,6,9)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 9 is "<<volume(3,9)<<endl;
    cout<<"The volume of cuboid of radius 3, 5 and height 8 is "<<volume(3,5,8)<<endl;
    cout<<"The volume of cube of side 3 is "<<volume(3)<<endl;

    return 0;
}