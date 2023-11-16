#include<iostream>
using namespace std;
class A
{
    private:
        int a,b;
    public:
        A()
        {
            a=0;
            b=0;
        }
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        void setData(int x)
        {
            a=x;
            b=0;
        }
        void showData()
        {
            cout<<a<<" "<<b<<endl;
        }
};
int main()
{
    A a,b;
    int x,y,r;
    cin>>x>>y>>r;;
    a.setData(r);
    b.setData(x,y);
    a.showData();
    b.showData();
    return 0;
}