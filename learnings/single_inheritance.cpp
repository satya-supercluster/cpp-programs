#include<iostream>
using namespace std;
class wood
{
    private:
        int code;
        float price;
        char type[10];
    public:
       void setwvalue()
       {
        cout<<"Enter code : "; cin>>code;
        cout<<"Enter price : "; cin>>price;
        cout<<"Enter type : "; cin>>type; 
       }
       void showwvalue()
       {
        cout<<"Wood code : "<<code<<endl;
        cout<<"Wood price : "<<price<<endl;
        cout<<"Wood type : "<<type<<endl;
       }
};
class furniture:public wood
{
    private:
        char work[20];
        int age;
        float q_value;
    public:
        void setfvalue()
        {
            cout<<"Enter quality value (1-100) : "; cin>>q_value;
            cout<<"Enter approx age wanted : "; cin>>age;
            cout<<"Enter the work : "; cin>>work;
        }
        void showfvalue()
        {
            cout<<"Furniture quality value : "<<q_value<<endl;
            cout<<"Furniture approx age : "<<age<<endl;
            cout<<"Furniture work : "<<work<<endl;
        }
};
int main()
{
    wood w1;
    furniture f1;
    w1.setwvalue();
    f1.setwvalue();
    f1.setfvalue();
    w1.showwvalue();
    f1.showwvalue();
    f1.showfvalue();
    return 0;
}