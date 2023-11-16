#include<iostream>
using namespace std;
class A
{
    private:
        int a,b;
    public:
        A()
        {
            a=0;
            b=0;
        }
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        
        void showData()
        {
            cout<<a<<" "<<b<<endl;
        }
        void fun()
        {
            cout<<"I'm very much funny"<<endl;
        }
        void fun(int x)             //overloading
        {
            for(int i=0;i<=x;i++)
            {
                cout<<"Much-Much funny"<<endl;
            }
        }
};
class B: public A
{
    public:
    void fun()              //method overriding
    {
        cout<<"It's  not funny"<<endl;
    }
};
int main()
{
    A a;
    B b;
    a.fun();
    b.fun();
    a.fun(5);
    //b.fun(2); gives error ...... ie. overhiding
    return 0;
}