#include <bits/stdc++.h>
using namespace std;
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
const bool testcases = 0;

void solve()
{
    string s;
    cin >> s;
    if (s.length() < 4)
    {
        cout << "NO" << endl;
        return;
    }
    int a = 0, b = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'B')
        {
            a++;
        }
        if (s[i] == 'B' && s[i + 1] == 'A')
        {
            b++;
        }
    }
    if (a > 1 && b > 1)
    {
        cout << "YES" << endl;
    }
    else if (a == 1 && b > 1)
    {
        if (s.find("BABA") != string::npos && b == 2)
        {
            cout << "NO" << endl;
        }
        else
        cout << "YES" << endl;
    }
    else if (a > 1 && b == 1)
    {
        if (s.find("ABAB") != string::npos && a == 2)
        {
            cout << "NO" << endl;
        }
        else
        cout << "YES" << endl;
    }
    else if (a == 1 && b == 1)
    {
        if (s.find("ABA") != string::npos || s.find("BAB") != string::npos)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}

int32_t main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    // formal;
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