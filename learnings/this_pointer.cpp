#include<iostream>
using namespace std;
class Box
{
    private:
        int l,b,h;
    public:
        void set_Dimension(int l,int b,int h)
        {
            this->l=l;
            this->b=b;
            this->h=h;
        }
        int volume()
        {
            return(l*b*h);
        }
};
int main()
{
    int v;
    Box b;
    b.set_Dimension(5,6,7);
    v=b.volume();
    cout<<v;
    return 0;
}