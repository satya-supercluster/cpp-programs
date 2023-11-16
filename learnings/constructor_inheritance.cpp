#include<iostream>
using namespace std;
class A
{
    public:
        A()
        {
            cout<<"constructor A is executed"<<endl;
        }
};
class B:public A
{
    public:
        B()
        {
            cout<<"constructor B is executed"<<endl;
        }
};
class C:public B
{
    public:
        C()
        {
            cout<<"constructor C is executed"<<endl;
        }
};
int main()
{
    A a;
    cout<<"Object of A is created"<<endl;
    B b;
    cout<<"Object of B is created"<<endl;
    C c;
    cout<<"Object of C is created"<<endl;
    return 0;
}