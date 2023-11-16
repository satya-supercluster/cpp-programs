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
    ll m,k,a1,ak;
    cin>>m>>k>>a1>>ak;
    ll has=a1+ak*k;
    if(ak!=0){
    if((m/k)<=ak&&m%k<=a1){
        cout<<"0"<<endl;
        return;
    }
    }
    else{
        if(m<=a1){
            cout<<"0"<<endl;
            return;
        }
    }
    if(ak!=0){
        if(m-ak*k<=0){
            m%=k;
        }
        else{
            m=m-ak*k;
        }
    }
    if(m<=a1){
        cout<<"0"<<endl;
        return;
    }
    else{
        m=m-a1;
    }
    ll ans=0;
    ans+=m/k;
    m%=k;
    ans+=m/k;
    cout<<ans<<endl;
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