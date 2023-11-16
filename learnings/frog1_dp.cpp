#include<bits/stdc++.h>
using namespace std;
#define formal			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ulli 			unsigned long long int
#define ll				long long int
#define ALL(x)			(x).begin(),(x).end()
#define loop0(i,k)		for(ll i=0;i<k;i++)
#define loop1(i,k)		for(ll i=1;i<=k;i++)
#define inloop(x)       for(auto it : x)
#define MOD				1000000007
#define m_p				make_pair
#define ff				first
#define ss				second
#define pb				push_back
#define pc				pop_back
#define mem(x,y)        memset(&x[0],y,x.size()*sizeof(x[0]))
#define mems(x,y)       memset(x,y,sizeof(x))


typedef vector<ll> 				vi;
typedef vector<char> 			vc;
typedef vector<string> 			vs;
typedef unordered_set<ll> 		usi;
typedef unordered_map<ll,ll> 	umii;
typedef set<ll> 				si;
typedef map<ll,ll> 				mii;
typedef pair<ll,ll>  			pii;
const   bool testcases=			0;

ll dp[100000];


ll fun(vi& v,ll k,ll in){
    if(in<=1) return dp[in];
    for(ll i=1;i<=k;i++){
        if(in-k<0) break;
        if(dp[in-i]==-1){
            dp[in-i]=fun(v,k,in-i);
        }
    }
    
    ll ans=min(dp[in-2]+abs(v[in-2]-v[in]),dp[in-1]+abs(v[in-1]-v[in]));
    for(ll i=3;i<=k;i++){
        if(in-k<0) break;
        ans=min(dp[in-i]+abs(v[in-i]-v[in]),ans);
    }
    return ans;
}

void solve(){
    ll n,k; cin>>n>>k;
    vi v(n);loop0(i,n)cin>>v[i];
    memset(dp,-1,sizeof(dp));
    dp[0]=0;
    dp[1]=abs(v[0]-v[1]);
    cout<<fun(v,k,n-1)<<endl;
}



int32_t main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    // formal;
    ll t=1;
    if(testcases){
        cin>>t;
    }
    while(t--){
        solve();
    }
    return 0;
}