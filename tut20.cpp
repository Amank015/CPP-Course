#include<iostream>
#include<string>
using namespace std;
class binary
    {
        string s;
        public:
        void read(void);
        void chk_bin(void);
        void ones_compliment(void);
        void display(void);

        
    };

    void binary ::read(void)
    {
        cout<<"Enter the binary number"<<endl;
        cin>>s;
    }
    
    void binary :: chk_bin(void)
    {
        for(int i=0; i<s.length(); i++)
        {
            if(s.at(i)!='0' && s.at(i)!='1')
            {
                cout<<"Incorrect binary format"<<endl;
                exit(0);
            }
        }
    }
    void binary :: ones_compliment(void)
    {
        for(int i=0; i<s.length(); i++)
        {
            if(s.at(i) =='0')
            {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    void binary :: display(void)
    {
        cout<<"Displaying the binary number"<<endl;

        for(int i=0; i<s.length(); i++)
        {
            cout<<s.at(i);
        }
    }

int main()
{
    // OOPs - classes and objects
    //C++ -->initially called --> with classes by stroustroup
    //class -->extension of structures (in C)
    //structures had limitations 
    // ---- > members are public
    // --->No methods
    //classes-- > structures + more
    //classes --> can have methods are properties
    //classes -->can make few members as private & few as public
    //structures in C++ are typedefed
    //you can declare objects along with the class declartion
    //

    //*****Nesting of members functions******//

    binary b;
    b.read();
    b.chk_bin();
    b.ones_compliment();
    b.display();

    

}