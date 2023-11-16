#include<bits/stdc++.h>
using namespace std;
#define formal ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ulli unsigned long long int
#define ll long long
#define ALL(x) (x).begin(),(x).end()
#define r(i,k) for( int i=k;i>0;i--)
#define fr(i,k) for(ll i=0;i<k;i++)
#define f(i,k) for(int i=1;i<=k;i++)
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
typedef unordered_map<ll,string> umis;
typedef unordered_map<ll,char> umic;
typedef pair<ll,ll> pii;
void solve(){
    ll n,sum,ws=0;
    cin>>n>>sum;
    ll a[n];
    fr(i,n) cin>>a[i];
    ll pre[n];
    pre[0]=a[0];
    if(a[0]==sum) ws=1;
    for(ll i=1; i<n; i++){
        pre[i]=a[i]+pre[i-1];
        if(pre[i]==sum){
            ws=max(ws,i+1);
        }
    }   
    ll csum=0,mx=0;
    fr(i,n){
        ll start=0,end=i;
        ll mid;
        csum+=a[i];
        if(csum==sum){
            mx=max(mx,i+1);
        }
        while(start<=end){
            mid=(start+end)/2;
            if(pre[mid]==csum-sum){
                mx=max(mx,i-mid);
                break;
            }
            else if(pre[mid]>csum-sum){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
    }
    cout<<mx<<endl;
}
int32_t main()
{
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}