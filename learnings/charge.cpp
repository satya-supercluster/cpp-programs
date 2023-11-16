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

int gcd(int a, int b) { return (b == 0 ? a : gcd(b, a % b)); }
int lcm(int a, int b) { return ((a * b) / gcd(a, b)); }
bool check_pal(string s, int i, int n) { return ((i == n / 2) ? 1 : ((s[i] == s[n - i - 1]) && check_pal(s, i + 1, n))); }
int log1(int a, int b) { return ((a <= 1) ? 0 : (log1(a / b, b) + 1)); } // log a base b (floored)

void solve(){
    ll n,neg=1; cin>>n;
    vi a(n); loop0(i,n) cin>>a[i],(a[i]>=0)?neg=0:53;
    if(neg) cout<<(*max_element(ALL(a)))<<endl;
    else{
        ll ans1=0,ans2=0; loop0(i,n) (i&1)?ans1+=max(a[i],0*1ll):ans2+=max(a[i],1ll*0);
        cout<<max(ans1,ans2)<<endl;
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