#include<bits/stdc++.h>
using namespace std;
#define formal ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ulli unsigned long long int
#define ll long long
#define ALL(x) (x).begin(),(x).end()
#define r(i,k) for(ll i=k;i>0;i--)
#define fr(i,k) for(ll i=0;i<k;i++)
#define f(i,k) for(ll i=1;i<k;i++)
#define MOD 1000000007
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define pc pop_back
typedef vector<ll> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef unordered_set<ll> usi;
typedef unordered_map<ll,ll> umii;
typedef unordered_map<char,ll> umci;
typedef pair<ll,ll> pii;
void solve(){
    int n;
    cin>>n;
    int a[n];
    fr(i,n) cin>>a[i];
    int mx=INT_MIN;
    fr(i,n){
        mx=max(mx,a[i]);
    }
    // mx=*max_element(a,a+n);
    cout<<mx<<endl;
}
int32_t main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
formal;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}