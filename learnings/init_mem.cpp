#include<iostream>
using namespace std;
class xClass
{
    private:
        int k;
        float m;
    public:
        xClass(int k, float m)
        {
            this->k = k;
            this->m = m;
        }
};
int main()
{
    xClass t(20,35.0);
    return 0;
}