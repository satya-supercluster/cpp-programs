#include<iostream>
using namespace std;
class A
{
    private:
        int a,b;
    public:
        A(int p,int q)
        {
            a=p; b=q;
            cout<<"constructor A is executed with arguments"<<endl;
        }
        void expand()
        {
            for(int i=1;i<=a;i++)
            {
                for(int j=1;j<=b;j++)
                {
                    cout<<i<<" and "<<j<<endl;
                }
            }
        }
};
class B:public A
{
    public:
        B(int p,int q):A(p,q)
        {
            cout<<"constructor B is executed"<<endl;
        }
};
class C:public B
{
    public:
        C(int p,int q):B(p,q)
        {
            cout<<"constructor C is executed"<<endl;
        }
};
int main()
{
    int a,b;
    cin>>a>>b;
    C c(a,b);
    c.expand();
    return 0;
}