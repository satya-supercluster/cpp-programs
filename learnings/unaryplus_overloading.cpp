#include<iostream>
using namespace std;
class inc
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
            cout<<"Increamented value is : "<<a<<endl;
        }
        inc operator ++()
        {   
            inc temp;
            a++;
            temp.a=a;
            return(temp);
        }
        inc operator ++(int)
        {
            inc temp;
            temp.a=a;
            a++;
            return(temp);
        }
};
int main()
{
    inc t,x,y;
    t.setvalue();
    x=++t;  //increament then assign
    y=t++;  //assign then increament
    x.showvalue();
    y.showvalue();
    return 0;
}