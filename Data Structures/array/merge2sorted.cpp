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
    int n;
    cin>>n;
    int a[n];
    fr(i,n) cin>>a[i];
    int m;
    cin>>m;
    int b[n];
    fr(i,m) cin>>b[i];
    sort(a,a+n); sort(b,b+m);
    int res[n+m];
    int i=0,j=0,k=0;
    while(i<n&&j<m){
        if(a[i]<=b[j]){
            res[k]=a[i];
            i++;
            k++;
        }
        else{
            res[k]=b[j];
            j++;
            k++;
        }
    }
    if(i<n){
        for(;i<n;i++){
            res[k]=a[i];
            k++;
        }
    }
    if(j<m){
        for(;j<m;j++){
            res[k]=b[j];
            k++;
        }
    }
    fr(i,n+m){
        cout<<res[i]<<" ";
    }
}
int32_t main()
{
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}