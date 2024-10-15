#include<iostream>
using namespace std;

int main()
{  
    int age;
    cout<<"Tell me your age:\n";
    cin>>age;

/*int age;
cout<<"Tell me your age:\n";
cin>>age;
if((age<18) && (age>0))
{
    cout<<"you can not come my party:\n";

}
else if (age==18)
{
    cout<<"you are a kid and you will get a kid pass to the party:\n";

}
else if (age<1)
{
    cout<<"you are not yet born:\n"<<endl;
}
else{
    cout<<"you can come to the party:\n";
}*/

  //switch case-statements:*************

  switch (age)
  {
  case 18:
    /* code */
    cout<<"you are 18";
    break;

case 20:
    /* code */
    cout<<"you are 20";
    break;

case 12:
    /* code */
    cout<<"you are 12";
    break;

default:
cout<<"No special cases"<<endl;
    break;



  }
  cout<<"Done with switch case"<<endl;







    return 0;
}