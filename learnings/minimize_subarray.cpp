#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    ll n, b, a, c, d, x, y, z;
    cin >> t;
    while (t--)
    {
        cin>>n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            if (a == 1)
                c = i;
            else if (a == n)
                d = i;
            else if (a == 2)
                x = i;
        }
        if (c > x)
            swap(c, x);
        if (x > d && c < d)
            cout << "1 1\n";
        else if (d < c)
            cout << d << " " << c << endl;
        else
            cout << d << " " << x << endl;
    }
}