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
    string s;
    cin>>s;
    ll index=s.size()+2;
    deque<char> d(s.begin(),s.end());
    if(d.size()>1)
    for(int i=d.size()-2;i>=0;i--){
        if(d[i+1]>='5'){
            if(d[i]!='9'){
                d[i]++;
                index=i+1;
            }
            else{
                while(d[i]=='9'){
                    i--;
                    if(i==-1) break;
                }
                if(i==-1){
                    d.push_front('1');
                    index=1;
                }
                else{
                    d[i]++;
                    index=i+1;
                    }
            }
        }
    }
    if(d[0]>='5'){
        d.push_front('1');
        index=1;
    }
    for(ll i=index;i<d.size();i++){
        d[i]='0';
    }
    inloop(d){
        cout<<it;
    }
    cout<<endl;
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