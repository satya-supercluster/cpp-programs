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
    int n,ans=0; cin>>n;
    int a[n];
    fr(i,n) cin>>a[i];
    int l=0,r=n-1;
    int lmax=0,rmax=0;
    while(l<=r){
        if(a[l]<=a[r]){
            if(a[l]>=lmax){
                lmax=a[l];
            }
            else{
                ans+=lmax-a[l];
            }
            l++;
        }
        else{
            if(a[r]>=rmax){
                rmax=a[r];
            }
            else{
                ans+=rmax-a[r];
            }
            r--;
        }
    }
    cout<<ans<<endl;
}
int32_t main()
{
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}   