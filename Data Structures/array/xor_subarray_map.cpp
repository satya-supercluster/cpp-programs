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
    int n,b,c=0; cin>>n>>b;
    long long a[n]; fr(i,n){ cin>>a[i]; }
    long long cxor=0;
    map<long long , int> pref_xor;
    for(int i=0; i<n; i++){
        cxor=cxor^a[i];
        pref_xor[cxor]++;
        if(cxor==b||a[i]==b){
            c++;
        }
    }
    cxor=0;
    for(int i=0;i<n;i++){
        cxor^=a[i];
        long long  xor_p= cxor^b;
        if(pref_xor.find(xor_p)!=pref_xor.end()){
            c+=pref_xor[xor_p]/2;
        }
    }
    cout<<c<<endl;
}
int32_t main()
{
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}