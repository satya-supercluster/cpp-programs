#include <iostream>
using namespace std;
int power(int a, int b)
{
    int r = 1;
    while (b)
    {
        if (b & 1)
            r = r * 1LL * a;
        a = (a * 1LL * a);
        b /= 2;
    }
    return r;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
    return 0;
}