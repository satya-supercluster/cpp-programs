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
ll minIndex(ll a[],ll i,ll j){
    if(i==j){
        return i;
    }
    ll k=minIndex(a,i+1,j);
    return (a[i]<a[k])?i:k;
}
void sorting(ll a[],ll n,ll index=0){
    if(index==n){
        return;
    }
    ll k=minIndex(a,index,n-1);
    if(k!=index){
        swap(a[k],a[index]);
    }
    sorting(a,n,index+1);
}
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    fr(i,n){
        cin>>a[i];
    }
    sorting(a,n);
    fr(i,n){
        cout<<a[i]<<" ";
    }
}
int32_t main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
formal;
    ll t=1;
    while(t--){
        solve();
    }
    return 0;
}