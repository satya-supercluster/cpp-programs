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
    int n;
    map<ll,ll> m;
    cin>>n;
    ll a[n];
    loop0(i,n) {
        cin>>a[i];
        m[a[i]]++;
        }
    vi b,c;
    ll mx=a[0],mn=a[0];
    loop0(i,n){
        if(a[i]%2==0){
            c.pb(a[i]);
        }
        else{
            b.pb(a[i]);
        }
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    if(b.size()&&c.size()){
        cout<<b.size()<<" "<<c.size()<<endl;
        inloop(b){
            cout<<it<<" ";
        }
        cout<<endl;
        inloop(c){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    else if(b.size()){
        cout<<"1 "<<n-1<<endl;
        cout<<mn<<endl;
        
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