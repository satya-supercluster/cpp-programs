#include<iostream>
using namespace std;
class complex{
    private:
        int x;
        int y;
        static int s;
    public:
        complex(int x){this->x=x;y=0;}
        complex(int x,int y){
            this->x=x;
            this->y=y;
        }
        complex(){}
        void setdata(){
            cin>>x>>y;
        }
        void getdata(){
            cout<<x<<" + "<<y<<"i"<<endl;
        }
        friend complex operator+(complex,complex);
        friend complex operator-(complex,complex);
        friend complex operator*(complex,complex);
};
int complex::s; //definition of static member is important and must be outside the class
complex operator+(complex c1,complex c2){
    complex c;
    c.x=c1.x+c2.x;
    c.y=c1.y+c2.y;
    return c;
}
complex operator-(complex c1,complex c2){
    complex c;
    c.x=c1.x-c2.x;
    c.y=c1.y-c2.y;
    return c;
}
complex operator*(complex c1,complex c2){
    complex c;
    c.x=c1.x*c2.x-c1.y*c2.y;
    c.y=c1.x*c2.y+c1.y*c2.x;
    return c;
}
int main(){
    complex c1,c2;
    c1.setdata();
    c2.setdata();
    complex c3;
    c3=c1+c2;
    c3.getdata();
    c3=c1-c2;
    c3.getdata();
    c3=c1*c2;
    c3.getdata();
    complex c4(1);
    c4.getdata();
    c4=6;
    c4.getdata();
    complex c5(c3);
    c5.getdata();
    return 0;
}