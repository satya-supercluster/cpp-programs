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
#define m_p				make_pairz
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
    
    ll n;
    cin>>n;
    ll b[n];
    ll co=0,ce=0;
    loop0(i,n){
        cin>>b[i];
        if(b[i]%2==0) ce++;
        else co++;
    }
    if(((co>0)&&(co%2!=0))||((ce>0)&&(ce%2!=0))){
        cout<<"-1"<<endl;
        return;
    }
    vi e,o;
    loop0(i,n){
        if(b[i]%2==0){
            e.pb(b[i]);
        }
        else o.pb(b[i]);
    }
    sort(ALL(e));
    sort(ALL(o));
    for(ll i=0;i<ce/2;i++) cout<<e[i]<<" ";
    for(ll i=0;i<co/2;i++) cout<<o[i]<<" ";
    for(ll i=ce/2;i<ce;i++) cout<<e[i]<<" ";
    for(ll i=co/2;i<ce;i++) cout<<o[i]<<" ";
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