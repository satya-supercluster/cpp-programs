#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll testcases = 1;
using pi = pair<ll, ll>;
using vi = vector<ll>;
template <class T>
using vc = vector<T>;
ll query(ll l, ll r);
vc<vi> computation(1000005, vi(20, 0));

void orr(vi&v,ll&search,ll mid){
    for (ll i = 0; i < mid; i++)
        search |= v[i];
}

void all(ll mid,ll&p,ll&search,ll&n){
    for (ll i = 1; i < n; i++)
    {
        ll first = i, last = i - 1ll + mid;
        if (last > n - 1)
            continue;
        else
        {
            ll currsearch = query(first, last);
            p = (currsearch != search) ? false : p;
            if (currsearch == search)
                continue;
            else
                break;
        }
    }
}

void solver( vi v,ll&k){
    ll n = v.size();
    ll l{1}, r = n;
    while (l <= r)
    {
        ll p = 1;
        ll search{};
        ll mid = l + (r - l) / 2ll;
        orr(v, search, mid);
        // searching alll of them
        all(mid, p, search, n);
        if (p == 1ll)
        {
            r = mid;
            r--;
            if (mid < k)
            {
                k = mid;
            }
        }
        else
        {
            l = mid;
            l++;
        }
    }
}

ll query(ll l, ll r)
{

    ll or_of{0ll};
    for (ll j = 20; j >= 0; j--)
        if ((1ll << j) <= r - l + 1ll)
            or_of |= computation[l][j],
                l += 1ll << j;
    return or_of;
}

void Main()
{
    ll n;
    cin >> n;
    ll k{n};
    vi v(n);
    for(auto&i:v)
        cin >> i;
    for (ll i{}; i <= n - 1; ++i)
        computation[i][0] = v[i];
    for (ll j{1}; j <= 20; j++)
        for (ll i = 0; i + (1ll << j) < n + 1; i++)
        {
            ll f = computation[i][j - 1ll];
            ll s = computation[i + (1ll << (j - 1))][j - 1];
            computation[i][j] = f | s;
        }
    solver(v,k);
    cout << k << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("i1.txt", "r", stdin);
    freopen("o1.txt", "w", stdout);
    freopen("e1.txt", "w", stderr);
#endif
    auto start1 = chrono::high_resolution_clock::now();
    ll t = 1;
    if (testcases)
    {
        cin >> t;
    }
    while (t--)
    {
        Main();
    }
    auto stop1 = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
    cerr << "Time: " << duration.count() / 1000.0 << endl;
#endif
    return 0;
}
