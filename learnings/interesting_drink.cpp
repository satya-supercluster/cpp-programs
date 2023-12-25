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
vi dp((int)1e9+1,-1);
ll low(vi v,ll t){
    ll l=0,h=v.size()-1,mid,ans=-2;
    while(l<=h){
        mid=l+(h-l)/2;
        if(v[mid]==t) {
            ans=mid;
            l=mid+1;
        }
        else if(v[mid]>t) h=mid-1;
        else l=mid+1;
    }
    if(ans!=-2) return ans;
    return h;
}

void SATYAMEV_JAYATE(){

    ll n;
    cin>>n;
    vi v(n);
    loop0(i,n) cin>>v[i];
    sort(ALL(v));
    ll q;
    cin>>q;
    while(q--){
        ll x,k;
        cin>>x;
        if(dp[x]==-1){
            k=low(v,x);
            dp[x]=k;
        }
        else{
            k=dp[x];
        }
        cout<<k+1<<endl;
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
        SATYAMEV_JAYATE();
    }
    return 0;
}