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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int l0=-1,r1=n;
    int l[n],r[n];
    loop0(i,n){
        if(s[i]=='0') l0=i;
        l[i]=l0;
    }
    for(int i=n-1; i>=0; i--){
        if(s[i]=='1') r1=i;
        r[i]=r1;
    }
    set<pair<int,int>> st;
    while(k--){
        int p,q;
        cin>>p>>q;
        int lp=r[p-1],rq=l[q-1];
        if(lp>rq) st.insert({-1,-1});
        else st.insert({lp,rq});
    }
    cout<<st.size()<<endl;
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