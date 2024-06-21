#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll testcases = 1;
using pi = pair<ll, ll>;
using vi = vector<ll>;
template <class T>
using vc = vector<T>;
template <class T>
using vvc = vector<vc<T>>;
template <class T>
using pq = priority_queue<T>;
template <class T>
using pqg = priority_queue<T, vector<T>, greater<T>>;
template <typename T>
T floor(T a, T b) { return a / b - (a % b && (a ^ b) < 0); }
template <typename T>
T ceil(T x, T y) { return floor(x + y - 1, y); }
template <typename T>
istream &operator>>(istream &cin, vector<T> &a)
{
    for (T &x : a)
        cin >> x;
    return cin;
}
template <typename T>
ostream &operator<<(ostream &out, vector<T> &a)
{
    for (T &x : a)
        out << x << " ";
    return out;
}
#define FOR_subset(t, s) for (ll t = (s); t >= 0; t = (t == 0 ? -1 : (t - 1) & (s)))
#define all(x) begin(x), end(x)
#define sz(x) ll(x.size())
#define elif else if
#define eb emplace_back
#define mp make_pair
#define ff first
#define ss second
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define LB(c, x) distance((c).begin(), lower_bound(all(c), (x)))
#define UB(c, x) distance((c).begin(), upper_bound(all(c), (x)))
#define UNIQUE(x) sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()
ll m = (ll)1e9 + 7ll;
ll fastexpo(ll a, ll b)
{
    a = (a + m) % m;
    long long res = 1ll;
    while (b)
    {
        if (b & 1ll)
            res = (res * 1ll * a + m) % m;
        b >>= 1ll;
        a = (a * 1ll * a + m) % m;
    }
    return res;
}

void Main()
{
    // ll h, n;
    // cin >> h >> n;
    // vi a(n), c(n);
    // cin >> a >> c;
    // std::multiset<pi> m;
    // for (int i{}; i < n; i++)
    // {
    //     m.insert({1ll, i});
    // }
    // ll ans{};
    ll DFunc, l, r, k;
    cin >> l >> r >> k;
    for (ll i{}; i < 100; ++i)
    {
        DFunc = (i * k > 9) ? i : DFunc;
        if (i * k > 9)break;
    }
    // (a^r-a^l) is ans
    return void(cout << ((m + fastexpo(DFunc, r) - fastexpo(DFunc, l)) % m + m) % m << endl);
    // while (h > 0)
    // {
    //     pi t = *m.begin();
    //     ans = t.first;
    //     h = h - a[t.second];
    //     m.erase(m.begin());
    //     m.insert({ans + c[t.second], t.second});
    // }
    // cout << ans << endl;
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