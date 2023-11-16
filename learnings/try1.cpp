#include<bits/stdc++.h>
using namespace std;
#define formal			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ulli 			unsigned long long int
#define ll				long long int
#define ALL(x)			(x).begin(),(x).end()
#define loop0(i,k)		for(ll i=0;i<k;i++)
#define loop(i,s,l)		for(ll i=s;i<=l;i++)
#define inloop(x)		for(auto it : x)
#define outloop(x)		for(auto it : x) cout<<it.first<<" "<<it.second<<endl;
#define MOD				1e9+7
#define MP				make_pair
#define F				first
#define S				second
#define pb				push_back
#define pc				pop_back
#define mems(x,y)		memset(x,y,sizeof(x))


typedef vector<ll>				vi;
typedef vector<char>			vc;
typedef vector<string>			vs;
typedef unordered_set<ll>		usi;
typedef unordered_map<ll,ll>	umii;
typedef set<ll>					si;
typedef map<ll,ll>				mii;
typedef pair<ll,ll>				pii;
const	bool testcases{1};



ll n,t,xi,yi,x,y;
void SATYAMEV_JAYATE(){
    cin>>n>>xi>>yi;
loop(i,1,n-1) {
cin>>x>>y;
if(y>=yi&&x>=xi) {
xi=-1;
}}
cout<<xi<<endl;	

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
        SATYAMEV_JAYATE();
    }
    return 0;
}