#include<bits/stdc++.h>
using namespace std;
#define formal ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ulli unsigned long long int
#define ll long long
#define ALL(x) (x).begin(),(x).end()
#define r(i,k) for( int i=k;i>0;i--)
#define fr(i,k) for(int i=0;i<k;i++)
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
    ll n,sum,csum,mx=0;
    cin>>n>>sum;
    ll a[n]; fr(i,n) cin>>a[i];
    ll i=0,j=0;
    csum=0;
    while(j<n){
        csum+=a[j];
        while(csum<sum){
            j++;
            csum+=a[j];
        }
        while(csum>sum){
            csum-=a[i];
            i++;
        }
        if(csum==sum){
            mx=max(mx,j-i+1);
            j++;
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