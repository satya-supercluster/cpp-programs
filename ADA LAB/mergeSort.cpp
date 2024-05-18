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
vi v;

void Merge(int s, int m, int e)
{
    vi t(v.size());
    int i = s, j = m + 1, k{s};
    while (i <= m && j <= e)
    {
        if (v[i] < v[j])
        {
            t[k++] = v[i++];
        }
        else
        {
            t[k++] = v[j++];
        }
    }
    while (i <= m)
        t[k++] = v[i++];
    while (j <= e)
        t[k++] = v[j++];
    for (int i = s; i <= e; i++)
    {
        v[i] = t[i];
    }
}

void MergeSort(int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        MergeSort(low, mid);
        MergeSort(mid + 1, high);
        Merge(low, mid, high);
    }
}
void Main()
{
    int n;
    cin >> n;
    v.resize(n);
    cin >> v;
    MergeSort(0, n - 1);
    cout << v << endl;
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