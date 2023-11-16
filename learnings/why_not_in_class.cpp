#include<iostream>
using namespace std;
class car
{
    private: 
        int price,code;
        char model[20];
    public:
       istream& operator>>(istream&in){
        in>>price>>model>>code;
            return in;
       }
       ostream& operator<<(ostream&out){
        out<<price<<" "<<model<<" "<<code<<endl;
        return out;
       }
};    

int main()
{
    car c1;
    c1>>cin;
    c1<<cout;
    return 0;
}