/*
-------------------------------------
? --|| author : Supercluster ||-- ?
? --|| name   : Satyam Gupta ||-- ?
-------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ulli unsigned long long int
#define ALL(x) (x).begin(), (x).end()
#define loop(i, s, l) for (ll i = s; i <= l; i++)
#define loop0(i, k) for (ll i = 0; i < k; i++)
#define inloop(x) for (auto it : x)
#define outloop1(x)   \
    for (auto it : x) \
        cout << it << " ";
#define outloop2(x)   \
    for (auto it : x) \
        cout << it.first << " " << it.second << endl;
#define MP make_pair
#define N 100005
#define F first
#define S second
#define pb push_back
#define pf push_front
#define mems(x, y) memset(x, y, sizeof(x))
#define vi vector<ll>
#define vc vector<char>
#define vs vector<string>
#define usi unordered_set<ll>
#define umii unordered_map<ll, ll>
#define si set<ll>
#define mii map<ll, ll>
#define pii pair<ll, ll>
#define pno cout << "NO" << endl
#define pyes cout << "YES" << endl
#define endl "\n"
const bool testcases{1};

ll MOD = 1e9 + 7;

/***extended euclidean***/
ll exgcd(ll a, ll b, ll &x, ll &y);

/***modulo exponent***/
ll pw(ll x, ll n, ll m);

/***modular arithmetic***/
ll modm(ll a, ll b, ll m = MOD) { return ((a % m) * (b % m)) % m; }
ll mods(ll a, ll b, ll m = MOD) { return (a % m - b % m + m) % m; }
ll moda(ll a, ll b, ll m = MOD) { return (a % m + b % m) % m; }
ll modinv(ll a, ll m = MOD) { return pw(a, m - 2, m) % m; }

/***mex of an array***/
ll mex(vi &ans, ll n);

// /***precomputations***/
// ll fact[N],invfact[N];

// /**factorials**/
// void prefact(ll M);

// /***fermat's little theorem***/
// ll ncr(ll n,ll r,ll m);

// CHAK DE !!

void SATYAMEV_JAYATE()
{
    
    

}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    if (testcases)
    {
        cin >> t;
    }
    while (t--)
    {
        SATYAMEV_JAYATE();
    }
    return 0;
}

/***extended euclidean***/
ll exgcd(ll a, ll b, ll &x, ll &y)
{
    if (a == 0)
    {
        x = 0, y = 1;
        return b;
    }
    ll x1, y1;
    ll ans = exgcd(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return ans;
}

/***modulo exponent***/
ll pw(ll x, ll n, ll m = MOD)
{
    ll res = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
            res = (res * x) % m;
        x = (x * x) % m;
        n = n / 2;
    }
    return res;
}

/***mex of an array***/
ll mex(vi &ans, ll n)
{
    ll c = 0, i;
    sort(ALL(ans));
    loop0(i, n)
    {
        if (ans[i] > c)
            return c;
        else if (ans[i] == c)
            c++;
    }
    return c;
}

// /**factorials**/
// void prefact(ll M=MOD)
// {
//     fact[0]=1;
//     loop(i,1,N-1){
//     fact[i]=(fact[i-1]*i);
//     fact[i]%=M;
//     }
//     invfact[N-1]=modinv(fact[N-1],M);
//     for(ll i=N-2;i>=0;i--)
//     {
//         invfact[i]=invfact[i+1]*(i+1);
//         invfact[i]%=M;
//     }
// }

// /***fermat's little theorem***/
// ll ncr(ll n,ll r,ll m=MOD) // % mod;
// {
//     if(n < r) return 0;
//     ll v  = (fact[n] * invfact[n-r]) % m;
//     v = (v * invfact[r]) % m;
//     return v;
// }