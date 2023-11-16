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
    int n,c = 0, z = 0, o = 0;
    cin >> n;
    string s;
    cin >> s;
    vector<int> temp(n + 1);
    // Two pointer
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (s[i] != s[j])
            c++;
        if (s[i] == s[j] && (s[i] == '0'))
            z++;
        else if (s[i] == s[j] && (s[i] == '1'))
            o++;
        i++;
        j--;
    }
    if (c == 0)
        temp.at(0) = 1;
    for (int i = c; i <= n; i++)
    {
        if ((i - c) > (z * 2 + o * 2) + n % 2 == 1)
        {
            //nothing to do here satya
        }
        else if ((i - c) % 2 == 1)
        {
            if (n % 2 == 1)
                temp.at(i) = 1;
        }
        else
            temp.at(i) = 1;
    }

    string ans;
    for (int i = 0; i <= n; i++)
        if (temp.at(i) == 0)
        {
            ans.pb('0');
        }
        else
        {
            ans.pb('1');
        }

    cout << ans << endl;
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