#include<bits/stdc++.h>
using namespace std;
#define formal			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ulli 			unsigned long long int
#define ll				long long int
#define ALL(x)			(x).begin(),(x).end()
#define loop0(i,k)		for(ll i=0;i<k;i++)
#define loop(i,s,l)		for(ll i=s;i<=l;i++)
#define inloop(x)		for(auto it : x)
#define outloop(x)		for(auto it : x) cout<<it.first<<" "<<it.second<<endl;
#define MOD				1e9+7
#define double	    long double
#define MP				make_pair
#define F				first
#define S				second
#define pb				push_back
#define pc				pop_back
#define mems(x,y)		memset(x,y,sizeof(x))


typedef vector<ll>				vi;

typedef vector<char>			vc;
typedef vector<string>			vs;
typedef unordered_set<ll>		usi;
typedef unordered_map<ll,ll>	umii;
typedef set<ll>					si;
typedef map<ll,ll>				mii;
typedef pair<ll,ll>				pii;
const	bool testcases{1};


double dist(ll ax,ll ay,ll bx,ll by){
    double ans;
    ll req=(ax-bx)*(ax-bx)+(ay-by)*(ay-by);
    ans=sqrt(req);
    return ans;
}

void SATYAMEV_JAYATE(){

    ll px,py,ax,ay,bx,by;
    double ans;
    cin>>px>>py>>ax>>ay>>bx>>by;
    if(dist(px,py,ax,ay)<=dist(px,py,bx,by)&&dist(0,0,ax,ay)<=dist(0,0,bx,by)){
        ans=max(dist(px,py,ax,ay),dist(0,0,ax,ay));
    }
    else if(dist(px,py,bx,by)<=dist(px,py,ax,ay)&&dist(0,0,bx,by)<=dist(0,0,ax,ay)){
        ans=max(dist(px,py,bx,by),dist(0,0,bx,by));
    }
    else if(dist(px,py,bx,by)<=dist(px,py,ax,ay)&&dist(0,0,ax,ay)<=dist(0,0,bx,by)){
        double bp,a0,ab;
        bp=dist(px,py,bx,by);
        a0=dist(0,0,ax,ay);
        ab=dist(bx,by,ax,ay);
        ab=ab/2.0;
        ans=max(bp,max(a0,ab));
    }
    else if(dist(px,py,ax,ay)<=dist(px,py,bx,by)&&dist(0,0,bx,by)<=dist(0,0,ax,ay)){
        double ap,b0,ab;
        ap=dist(px,py,ax,ay);
        b0=dist(0,0,bx,by);
        ab=dist(bx,by,ax,ay);
        ab=ab/2.0;
        ans=max(ap,max(b0,ab));
    }
    else cout<<"-1"<<endl;
    cout<<fixed<<setprecision(10)<<ans<<endl;
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