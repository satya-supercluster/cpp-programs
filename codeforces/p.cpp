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

void solver(ll z, ll k, ll x, ll y)
{
    ll value =(ll) cbrt(k);
    ll ans = 0ll;
    for (ll a= 1ll; a <=(ll) sqrt(k); ++a)
    {
        if (!(k % a))
            for (ll b=1ll; b <= sqrt(k / a); ++b)
                if (!((k*1ll / a*1ll) % b))
                {
                    if ((ll)k*1ll / (a *1ll* b) < 1ll+x and b < 1ll+y and a < 1ll+z)
                        ans = max({ans, (y - b + 1)*(x - (ll)k*1ll / (a *1ll* b) + 1) *(z - a + 1)});
                    if ((ll)k*1ll / (a *1ll* b) < 1ll+x and a < 1ll+y and b < 1ll+z)
                        ans = max({ans, (y - a + 1) * (x - (ll)k*1ll / (a *1ll* b) + 1) * (z - b + 1)});
                    if (a < 1ll+x and (ll)k*1ll / (a *1ll* b) < 1ll+y and b < 1ll+z)
                        ans = max({ans, (y - (ll)k*1ll / (a *1ll* b) + 1) * (z - b + 1) * (x - a + 1)});
                    if (b < 1ll+x and (ll)k*1ll / (a *1ll* b) < 1ll+y and a < 1ll+z)
                        ans = max({ans, (x - b + 1) * (z - a + 1) * (y - (ll)k*1ll / (a *1ll* b) + 1)});
                    if (b < 1ll+x and a < 1ll+y and (ll)k*1ll / (a *1ll* b) < 1ll+z)
                        ans = max({ans, (x - b + 1) * (z - (ll)k*1ll / (a *1ll* b) + 1) * (y - a + 1)});
                    if (a < 1ll+x and b < 1ll+y and (ll)k*1ll / (a *1ll* b) < 1ll+z)
                        ans = max({ans, (y - b + 1) * (x - a + 1) * (z - (ll)k*1ll / (a *1ll* b) + 1)});
            }
    }
    return void(cout << ans  << endl);
}
void Main()
{
    ll x, y, z, k;
    cin >> x >> y >> z >> k;
    solver(z, k,x,y);
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