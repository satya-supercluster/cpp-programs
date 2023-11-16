#include<iostream>
using namespace std;
class complex
{
    private:
        int a,b;
    public:
        void setdata()
        {
            cout<<"Enter the real part : ";
            cin>>a;
            cout<<"Enter the imaginary part : ";
            cin>>b;
        }
        void showdata()
        {
            cout<<"The resultant complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
        complex operator +(complex x)
        {
            complex addition;
            addition.a=a+x.a;
            addition.b=b+x.b;
            return(addition);
        }
};

int main()
{
    complex c1,c2,c3;
    c1.setdata();
    c2.setdata();
    c3=c1+c2;
    c3.showdata();
    return 0;
}