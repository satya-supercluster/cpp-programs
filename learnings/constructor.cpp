#include<iostream>
using namespace std;
class name
{
    public:
        name()     //default
        {
            cout<<"default constructor is called"<<endl;
        }
        name(int x,int y,int z)                //overloaded 
        {
             cout<<"overloaded constructor is called"<<endl;
        }
        name(name& n)
        {
            cout<<"copy constructor is called"<<endl;
        }
        ~name()
        {
            cout<<"destructor is called finally"<<endl;
        }
};
int main()
{
    name c1(5,6,7),c2;
    name c3(c2);
    name c4;
    return 0;
}