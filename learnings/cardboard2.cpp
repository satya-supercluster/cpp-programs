#include<bits/stdc++.h>
using namespace std;
#define formal			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll				unsigned long long int
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

int check(ll x,ll n,ll c,ll a[]){
    ll ans=0;
    loop0(i,n){
        ans+=(a[i]+2*x)*(a[i]+2*x);
        if(ans>c){
            return 1;
        }
    }
    if(ans==c){
        return 0;
    }
    else if(ans>c){
        return 1;
    }
    else return -1;
}

void solve(){
    ll n,c,ans; cin>>n>>c;
    ll a[n]; loop0(i,n) cin>>a[i];
    ll s=1,e=1e9,mid;
    while(s<=e){
        mid=s+(e-s)/2;
        if(check(mid,n,c,a)==0){
            ans=mid;
            break;
        }
        else if(check(mid,n,c,a)==1){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
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