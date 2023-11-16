#include<iostream>
using namespace std;
class car
{
    private:
        int price,code;
        char model[20];
    public:
        friend ostream& operator <<(ostream&,car);
        friend istream& operator >>(istream&,car&); 
};    
ostream& operator<<(ostream &dout,car c)
{
    cout<<"price : "<<c.price<<endl<<"code : "<<c.code<<endl<<"model : "<<c.model<<endl;
    return(dout);
}   
istream& operator>>(istream &din,car &c)
{
    cout<<"Enter the price of car : ";
    din>>c.price;
    cout<<"Enter the code of car : ";
    din>>c.code;
    cout<<"Enter the model of car : ";
    cin>>c.model;
    return(din);
}
int main()
{
    car c1;
    cin>>c1;
    cout<<c1;
    return 0;
}