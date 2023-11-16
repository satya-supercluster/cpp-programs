#include<iostream>
using namespace std;
class A{
    private: int a;
    public:
        A(int a=0){
            this->a=a;
        }
        void out(){
            cout<<a<<endl;
        }
};
class B:public A{
    public:
        B(int k):A(k){
        }
};

int main(){
    B b(5);
    b.out();
    return 0;
}