#include<iostream>
using namespace std;
class A
{
    public:
        A()
        {
            cout<<"constructor A is executed"<<endl;
        }
         void fn1()
        {
            cout<<"It's funny A"<<endl;
        }
        void fn()
        {
            cout<<"It's funny A default"<<endl;
        }
        virtual ~A()        //late binding ... so that all destructor get executed
        {
            cout<<"A Desrtructor"<<endl;
        }
};
class B:public A
{
    public:
        B()
        {
            cout<<"constructor B is executed"<<endl;
        }
        void fn2()
        {
            cout<<"It's funny B"<<endl;
        }
        void fn()
        {
            cout<<"It's funny B default"<<endl;
        }
        ~B()
        {
            cout<<"B Desrtructor"<<endl;
        }
};
class C:public B
{
    public:
        C()
        {
            cout<<"constructor C is executed"<<endl;
        }
         void fn3()
        {
            cout<<"It's funny C"<<endl;
        }
        void fn()
        {
            cout<<"It's funny C default"<<endl;
        }
        ~C()
        {
            cout<<"C Desrtructor"<<endl;
        }
};
int main()
{   
    B a;
    cout<<endl;
    A *b;
    cout<<endl;
    B *c;
    cout<<endl;
    C *d;
    cout<<endl;
    A *p=new B;
    cout<<endl;
    B *q=new C;
    cout<<endl;
    p->fn1();
    cout<<endl;
    q->fn1();
    cout<<endl;
   // p->fn2(); //error
    q->fn2();
    cout<<endl;
    // p->fn3(); //error
    // q->fn3(); //error
    p->fn();
    cout<<endl;
    q->fn();
    delete p;
    cout<<endl;
    delete q;
    return 0;
}