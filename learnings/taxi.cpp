#include<bits/stdc++.h>
using namespace std;
#define formal			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ulli			unsigned long long int
#define double			long double
#define ll				long long int
#define ALL(x)			(x).begin(),(x).end()
#define loop0(i,k)		for(ll i=0;i<k;i++)
#define loop(i,s,l)		for(ll i=s;i<=l;i++)
#define inloop(x)		for(auto it : x)
#define outloop(x)		for(auto it : x) cout<<it.first<<" "<<it.second<<endl;
#define outloop1(x)		for(auto it : x) cout<<it<<" ";
#define MOD				1e9+7
#define MP				make_pair
#define F				first
#define S				second
#define pb				push_back
#define pc				pop_back
#define mems(x,y)		memset(x,y,sizeof(x))
#define vi				vector<ll>
#define vc				vector<char>
#define vs				vector<string>
#define usi				unordered_set<ll>
#define umii			unordered_map<ll,ll>
#define si				set<ll>
#define mii				map<ll,ll>
#define pii				pair<ll,ll>
const	bool			testcases{0};



void SATYAMEV_JAYATE(){

    mii m;
    ll n;
    cin>>n;
    while(n--){
        ll x;
        cin>>x;
        m[x]++;
    }
    m[1]-=m[3];
    m[1]=max(0ll,m[1]);
    if(m[2]%2==0){
        m[2]/=2;
    }
    else{
        m[2]/=2;
        m[2]+=1;
        m[1]-=2;
        m[1]=max(0ll,m[1]);
    }
    m[1]=(m[1]%4==0)?m[1]/4:(m[1]/4)+1;
    cout<<(max(0ll,m[1]))+(max(0ll,m[2]))+(max(0ll,m[3]))+(max(0ll,m[4]))<<endl;

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