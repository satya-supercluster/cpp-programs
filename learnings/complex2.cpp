#include<bits/stdc++.h>
class complex{
    private:
        int a,b;
    public:
        void setdata(int a,int b){
            this->a = a;
            this->b = b;
        }
        void showdata(){
            std::cout<<a<<" + "<<b<<"i"<<std::endl;
        }
        complex operator+(const complex& c){
            complex result;
            result.a=a+c.a;
            result.b=b+c.b;
            return result;
        }
        friend complex fun(complex); 
};
complex fun(complex c){
    c.a*=2;
    c.b*=2;
    return c;
}
int main(){
    complex c,c1,c2;
    c1.setdata(1,2);
    c2.setdata(7,9);
    c=c1+c2;
    c.showdata();
    c=fun(c);
    c.showdata();
    return 0;
}