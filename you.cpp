#include<iostream>
using namespace std;
int main()
{
	int a[3][3],row,col;
	cout<<"Enter the elements of matrix:\n";
	for(int row=0; row<3; row++)
	{
		
	for(int col=0; col<3; col++)
    {
         cin>>a[row][col];
    }
    }
    cout<<"The matrix is=\n";
    for(int row =0; row<3; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout<<a[row][col];
        }
    }
    cout<<"\n";
	
	   return 0;
}