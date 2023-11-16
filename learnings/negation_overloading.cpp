#include<iostream>
using namespace std;
class neg
{
    private:
        int a;
    public:
        void setvalue()
        {
            cout<<"Enter the number";
            cin>>a;
        }
        void showvalue()
        {
            cout<<"Negated value is : "<<a<<endl;
        }
        neg operator -()
        {   
            neg temp;
            temp.a=-a;
            return(temp);
        }
};
int main()
{
    neg t;
    t.setvalue();
    (-t).showvalue();
    return 0;
}