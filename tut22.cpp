#include<iostream>
using namespace std;
class employee
{
    int id;
   static int count;
    public:
    void setdata(void)
    {
        cout<<"Enter the id"<<endl;
        cin>>id;
       count++;
    }
    void getdata(void)
    {
        cout<<"the id of this employee is"<<id<<"and this is employee number"<<count<<endl;
    }
    static void getcount(void)
    {
        cout<<"the value of count is"<<count<<endl;
    }
};
int employee ::count=10000;//default value is 0
int main()
{
    employee aman, ashwin, abhishek;

      aman.setdata();
      aman.getdata();
      employee::getcount();

    
      ashwin.setdata();
      ashwin.getdata();
      employee::getcount();

      abhishek.setdata();
      abhishek.getdata();
      employee::getcount();

          return 0;
      }