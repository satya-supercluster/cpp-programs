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
    ll n,k;
    cin>>n>>k;
    vi v(n),prefr(n);
    mii mp;
    loop0(i,n) cin>>v[i];
    mp.insert({v[0],0});
    mp.insert({v[n-1],0});
    loop0(i,n){
        if(v[i]==v[0]&&mp[v[0]]<k){
            mp[v[0]]++;
        }
        if(v[i]==v[n-1]&&mp[v[0]]>=k){
            mp[v[n-1]]++;
        }
    }
    if(mp[v[0]]>=k&&mp[v[n-1]]>=k){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
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
    if(testcases){
        cin>>t;
    }
    while(t--){
        solve();
    }
    return 0;
}