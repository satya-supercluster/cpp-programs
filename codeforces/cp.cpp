#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll testcases = 0;
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
template <typename T> istream &operator>>(istream &cin, vector<T> &a){ for (T &x : a) cin >> x; return cin; }
template <typename T> ostream &operator<<(ostream &out, vector<T> &a) { for (T &x : a) out << x<<" "; return out; }
#define FOR_subset(t, s) for (ll t = (s); t >= 0; t = (t == 0 ? -1 : (t - 1) & (s)))
#define all(x) begin(x),end(x)
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
void Main()
{
    int n ;
    cin>>n;
    vi v(n);
    cin >> v;
    vc<vi> dp(n, vi(4, 0));
    dp[0][0] = 0;
    dp[0][1] = v[0];
    dp[0][2] = 0;
    dp[0][3] = 0;
    for (int i{1}; i < n;i++){
        dp[i][0] = max({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]});
        if (dp[i - 1][0] >= dp[i - 1][1] and dp[i - 1][0] >= dp[i - 1][2]){
            dp[i][4] = 0;
        }
        elif (dp[i - 1][1] >= dp[i - 1][0] and dp[i - 1][1] >= dp[i - 1][2])
        {
            dp[i][4] = 1;
        }
        elif (dp[i - 1][2] >= dp[i - 1][0] and dp[i - 1][2] >= dp[i - 1][1])
        {
            dp[i][4] = 2;
        }
        ll temp=dp[i-1][0],odd{},even{};
        if(dp[i-1][4]==1){
            odd = 0;
            even = temp + 2ll * v[i];
        }
        else if(dp[i-1][4]==2){
            even=0;
            odd = temp + v[i];
        }
        dp[i][1] = max({odd, dp[i - 1][2] + v[i]});
        dp[i][2] = max({even, dp[i - 1][1] + 2ll * v[i]});
    }
    cout << max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]}) << endl;
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