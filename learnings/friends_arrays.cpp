#include <bits/stdc++.h>
using namespace std;
#define formal                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ulli unsigned long long int
#define ll long long int
#define ALL(x) (x).begin(), (x).end()
#define loop0(i, k) for (ll i = 0; i < k; i++)
#define loop1(i, k) for (ll i = 1; i <= k; i++)
#define inloop(x) for (auto it : x)
#define MOD 1000000007
#define m_p make_pair
#define ff first
#define ss second
#define pb push_back
#define pc pop_back
#define mem(x, y) memset(&x[0], y, x.size() * sizeof(x[0]))
#define mems(x, y) memset(x, y, sizeof(x))

typedef vector<ll> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef unordered_set<ll> usi;
typedef unordered_map<ll, ll> umii;
typedef set<ll> si;
typedef map<ll, ll> mii;
typedef pair<ll, ll> pii;
const bool testcases = true;

void solve()
{
    ll n, m, orr = 0, ans, mn, mx;
    cin >> n >> m;
    vi a(n), b(m);
    loop0(i, n) cin >> a[i];
    loop0(i, m) cin >> b[i], orr |= b[i];
    ans = a[0];
    for (ll i = 1; i < n; i++)
    {
        ans = ans ^ a[i];
    }
    mx = ans;
    loop0(i, n) a[i] |= orr;
    ans = a[0];
    for (ll i = 1; i < n; i++)
    {
        ans = ans ^ a[i];
    }
    mn = ans;
    if (n % 2 == 0)
    {
        cout<<mn<<" "<<mx<<endl;
    }
    else
    {
        cout<<mx<<" "<<mn<<endl;
    }
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    formal;
    ll t = 1;
    if (testcases)
    {
        cin >> t;
    }
    while (t--)
    {
        solve();
    }
    return 0;
}