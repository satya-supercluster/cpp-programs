#include<iostream>
using namespace std;
class complex
{
    private:
        int a,b;
    public:
        void setdata()
        {
            cout<<"Enter real part : ";
            cin>>a;
            cout<<"Enter imaginary part : ";
            cin>>b;
        }
        void showdata()
        {
            cout<<"Answer is "<<a<<"+"<<b<<"i"<<endl;
        }
        complex operator +(complex c)
        {
            complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return(temp);
        }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata();
    c2.setdata();
    c3=c1.operator +(c2);  // c3=c1+c2;
    c3.showdata();
    return 0;
}