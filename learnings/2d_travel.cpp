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
const   bool testcases=			true;



void solve(){
    ll n,k,a,b;
    cin>>n>>k>>a>>b;
    vi x(n),y(n);
    loop0(i,n){
        cin>>x[i]>>y[i];
    }
    ll ans=LLONG_MAX;
    if(a>k&&b>k){
        ll ans1=LLONG_MAX;
        ll ans2=LLONG_MAX;
        for(ll i=k-1;i>=0;i--){
            ans1=min(ans1,abs(x[a-1]-x[i])+abs(y[a-1]-y[i]));
            ans2=min(ans2,abs(x[b-1]-x[i])+abs(y[b-1]-y[i]));
        }
        ans=abs(x[a-1]-x[b-1])+abs(y[a-1]-y[b-1]);
        if(k)
        ans=min(ans,ans1+ans2);
    }
    else if(a>k&&b<=k){
        for(ll i=k-1;i>=0;i--){
            ans=min(ans,abs(x[a-1]-x[i])+abs(y[a-1]-y[i]));
        }
    }
    else if(a<=k&&b>k){
        for(ll i=k-1;i>=0;i--){
            ans=min(ans,abs(x[b-1]-x[i])+abs(y[b-1]-y[i]));
        }
    }
    else{
        ans=0;
    }
    cout<<ans<<endl;
}



int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    formal;
    ll t=1;
    if(testcases){
        cin>>t;
    }
    while(t--){
        solve();
    }
    return 0;
}