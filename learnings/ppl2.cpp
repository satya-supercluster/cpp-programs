#include<iostream>
using namespace std;
class A{
    public:
        A(){
            cout<<"A"<<endl;
        }
        ~A(){
            cout<<"A des"<<endl;
        }
};
class B:virtual public A{
    public:
    B(){
            cout<<"B"<<endl;
        }
        ~B(){
            cout<<"B Des"<<endl;
        }
};
class C:virtual public A{
    public:
        C(){
            cout<<"C"<<endl;
        }
        ~C(){
            cout<<"C DES"<<endl;
        }
};
class k{
    public: k(){
        cout<<"K"<<endl;
    }
    ~k(){
        cout<<"~K"<<endl;
    }
};
class D: public C, public k,public B{
    // ~D()
    // {
    //     cout<<"DES D"<<endl;
    //     C::~C();
    //     B::~B();
    // }
};
int main(){
    // A a;
    // B b;
    // a.fun();
    // b.fun();
    // A *p=NULL;
    // p=new B;
    // p->fun();
    // B *q=NULL;
    // q=new B;
    // q->fun();
    // D d;
    // d.fun();
    D d;
    return 0;
}