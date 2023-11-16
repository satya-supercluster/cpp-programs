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
        cin>>n;
        
        long long A[n];
        for(int i=0;i<(n-1);++i){
            cin>>A[i];
        }
        
        long long sum = n;
        sum*=(sum+1ll);
        sum/=2ll;
        
        if(A[n-2] > sum){
            cout<<"NO\n";
            return;
        }
        
        set<long long>avail;
        for(int i=1;i<=n;++i)avail.insert(i);
        int c = 0;
        long long val = -1,star = -1;
        int f = 0;
        for(int i=1;i<(n-1);++i){
            long long dif =A[i]-A[i-1];
            if(avail.find(dif) == avail.end()){
                    val = dif;
                    
            }
            else avail.erase(dif);
             
        }
        
        if(A[n-2] == sum){
            //either from start
            if(avail.size() == 2){
                //it means from start
                long long cur_sum = 0;
                for(auto&x:avail)cur_sum += x;
                
                if(cur_sum == A[0])cout<<"YES\n";
                else cout<<"NO\n";
            }
            else if(avail.size()>3)cout<<"NO\n";
            else{
                //it means from middle
                if(avail.find(A[0]) == avail.end()){
                    cout<<"NO\n";
                }
                else{
                    avail.erase(A[0]);
                    long long cur_sum = 0;
                    for(auto&x:avail)cur_sum += x;
                    if(cur_sum == val)cout<<"YES\n";
                    else cout<<"NO\n";
                }
            }
        }
        else{
            //last value is removed
            if(avail.size()>2)cout<<"NO\n";
            else if(avail.find(A[0]) == avail.end()){
                cout<<"NO\n";
            }
            else cout<<"YES\n";
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