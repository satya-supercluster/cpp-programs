#include<iostream>
using namespace std;
class fun
{   
    private:
        int a,b;
    public:
        void set()
        {
            cout<<"Enter two space seperated integers"<<endl;
            cin>>a>>b;
        }
        friend int add(fun);
};
int add(fun c)
{
    return(c.a+c.b);
}
int main()
{
    fun k;
    k.set();
    cout<<"Answer is "<<add(k)<<endl;
    return 0;
}