#include<iostream>
using namespace std;
class complex{
    private:
        int a,b;
    public:
        void assign_data(int x,int y)
        {
            a=x; b=y;
        }
        void setdata()
        {
            cout<<"Enter real part : ";
            cin>>a;
            cout<<"Enter imaginary part : ";
            cin>>b;
        }
        void showdata()
        {
            cout<<a<<"+"<<b<<"i"<<endl;
        }
        complex add(complex c)
        {
            complex add;
            add.assign_data(a+c.a,b+c.b);
            //add.a=a+c.a;
            //add.b=b+c.b;
            return(add);
        }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata();
    c2.setdata();
    c3=c1.add(c2);
    cout<<"Complex number after addition is : ";
    c3.showdata();
    return 0;
}