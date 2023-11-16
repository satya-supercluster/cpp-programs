#include<iostream>
#include<string.h>
using namespace std;
class person
{
    private:
        class address       //nested class
        {
            char street[50],dist[20],state[20];
            public:
                void SetAdd()
                {
                    cout<<"Enter street name : ";
                    gets(street);
                    cout<<"Enter district name : ";
                    gets(dist);
                    cout<<"Enter state name : ";
                    gets(state);
                }
                void ShowAdd()
                {
                    puts(street);
                    puts(dist);
                    puts(state);   
                }
        };
        address a;
    public:
        void SetData()
        {
            a.SetAdd();
        }
        void  ShowData()
        {
            a.ShowAdd();
        }
};
int main()
{
    person s;
    s.SetData();
    s.ShowData();
    return 0;
}