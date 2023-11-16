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
const   bool testcases=			0;



void solve(){
    ll n;
    cin>>n;
    if(((n*(n+1))/2)%2){
        std::cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    ll sum=(n*(n+1))/2;
    ll to_find=sum/2;
    ll part=0,c=0;
    vector<int> v(n+1,0);
    for(int i=1;i<=n;i++){
        part+=i;
        v[i]=1;
        c++;
        if(part>to_find){
            v[part-to_find]=0;
            c--;
            break;
        }
        else if(part==to_find){
            break;
        }
    }
    std::cout<<c<<endl;
    for(int i=1;i<v.size();i++){
        if(v[i]==1){
            std::cout<<i<<" ";
        }
    }
    std::cout<<endl;
    std::cout<<n-c<<endl;
    for(int i=1;i<v.size();i++){
        if(v[i]==0){
            std::cout<<i<<" ";
        }
    }
    std::cout<<endl;
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