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
    vector<int> a(7);
    a[0]=4;
    a[1]=5;
    a[2]=6;
    a[3]=7;
    a[4]=8;
    a[5]=1;
    a[6]=2;
    int t=8;
    int s=0,e=a.size()-1,mid,prev=-1,k=2;
            cout<<s<<" "<<e<<" "<<mid<<endl;
        while(s<=e){
            mid=(e+s)/2;
            if(a[mid]==t){
                cout<< mid;
                return;
            }
            else if(a[mid]>t){
                if(a[s]>t){
                    s=mid+1;
                }
                else{
                    e=mid;
                }
            }
            else{
                if(t<=a[e]){
                    s=mid+1;
                }
                else{
                    e=mid;
                }
            }
            cout<<s<<" "<<e<<" "<<mid<<endl;
            if(k){
                k--;
            }
            else{
                prev=mid;
            }
            if(prev==mid){
                break;
            }
        }  
        cout<<"-1"<<endl; 
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