#include<iostream>
using namespace std;

class A{
    private:
        int a;
    public:
        A(){
            cout<<"Constructor"<<endl;
        }
        void set(int a){
            this->a=a;
        }
        A(A &a){
            cout<<this->a<<" ";
            this->a=a.a;
            cout<<this->a<<" ";
            cout<<"Copy"<<endl;
        }
        void operator=(const A &b){
            cout<<this->a<<" ";
            a=b.a;
            cout<<this->a<<" ";
            cout<<"Assignment"<<endl;
        }
};
void fun(A a){
    return;
}
int main(){
    A a;
    a.set(5);
    cout<<endl;
    A b(a);
    cout<<endl;
    A c;
    cout<<endl;
    c.operator=(a);
    cout<<endl;
    A d;
    cout<<endl;
    fun(c);
    return 0;
}
