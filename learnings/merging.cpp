#include<bits/stdc++.h>
using namespace std;
#define formal			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll				long long int
#define ulli 			unsigned long long int
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


typedef vector<ll> 				vi;
typedef vector<char> 			vc;
typedef vector<string> 			vs;
typedef unordered_set<ll> 		usi;
typedef unordered_map<ll,ll> 	umii;
typedef pair<ll,ll>  			pii;
const   bool testcases=			false;

void bubble_sort(ll a[],ll n){
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            if(a[j]<a[i]){
                a[j]=a[j]^a[i];
                a[i]=a[j]^a[i];
                a[j]=a[j]^a[i];

            }
        }
    }
}

void solve(){
    ll n;
    cout<<"Enter the number of elements in the first array: ";
    cin>>n;
    ll a[n];
    cout<<"Enter the elements: ";
    loop0(i,n) cin>>a[i];
    ll m;
    cout<<"Enter the number of elements in the second array: ";
    cin>>m;
    ll b[m];
    cout<<"Enter the elements: ";
    loop0(i,m) cin>>b[i];
    ll ans[n+m];
    loop0(i,n) ans[i]=a[i];
    for(ll j=n;j<n+m;j++) ans[j]=b[j-n];
    bubble_sort(ans,n+m);
    loop0(i,n+m) cout<<ans[i]<<" ";
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