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
#define a 1
#define b 10
#define c 100
#define d 1000
#define e 10000
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


ll calc(string s){
    ll ans=0;
    char pr[s.length()];
    pr[s.length()-1]='A';
    for(ll i=s.length()-2;i>=0;i--){
        pr[i]=max(pr[i+1],s[i+1]);
    }
    loop0(i,s.length()){
        if(s[i]=='A') (pr[i]>s[i])?ans-=a:ans+=a;
        if(s[i]=='B') (pr[i]>s[i])?ans-=b:ans+=b;
        if(s[i]=='C') (pr[i]>s[i])?ans-=c:ans+=c;
        if(s[i]=='D') (pr[i]>s[i])?ans-=d:ans+=d;
        if(s[i]=='E') (pr[i]>s[i])?ans-=e:ans+=e;
        cout<<pr[i];
    }
    cout<<endl;
    return ans;
}
void solve(){
    string s;
    cin>>s;
    loop0(i,s.length()){
        if(s[i]<'E'){
            s[i]='E';
            break;
        }
    }
    cout<<s<<endl;
    cout<<calc(s)<<endl;
    return;
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