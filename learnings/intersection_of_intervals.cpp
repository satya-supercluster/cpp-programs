#include<bits/stdc++.h>
using namespace std;
#define formal			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ulli 			unsigned long long int
#define ll				long long int
#define ALL(x)			(x).begin(),(x).end()
#define loop0(i,k)		for(ll i=0;i<k;i++)
#define loop1(i,k)		for(ll i=1;i<=k;i++)
#define inloop(it,x)       for(auto it : x)
#define MOD				1000000007
#define mp				make_pair
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
typedef pair<ll,ll>  			pii;
const   bool testcases=			true;



void solve(){
    ll n;
    cin>>n;
    vector<pair<int,int>> v;
    while(n--){
        int l,r;
        cin>>l>>r;
        v.push_back(mp(l,r));
    }
    int l=v[0].ff;
    int r=v[0].ss;
    for(int i=1;i<v.size();i++){
        l=max(l,v[i].ff);
        r=min(r,v[i].ss);
        if(l>r){
            cout<<"-1"<<endl;
            return;
        }
    }
    cout<<"[ "<<l<<","<<r<<" ]"<<endl;
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