// Array Reduction 3

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    multiset<ll> s;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        s.insert(a);
    }
    ll cost = 0;
    while (s.size() > 1)
    {
        auto it1 = s.begin();
        auto it2 = s.end();
        --it2;
        ll a = *it1;
        ll b = *it2;

        s.erase(it1);
        s.erase(it2);

        cost += ceil((b * 1.0 + a * 1.0) / (b - a + 1));
        s.insert(a + b);
    }
    cout << cost << endl;
}

int main()
{

    int tests = 1;

    for (int i = 1; i <= tests; ++i)
    {
        solve();
    }
    return 0;
}