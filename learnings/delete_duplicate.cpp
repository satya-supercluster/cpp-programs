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



void solve(){
    ll n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    ll a[n];
    cout<<"Enter the elements: ";
    loop0(i,n) cin>>a[i];
    ll fr[n];
    memset(fr,0,sizeof(fr));
    loop0(i,n){
        ll j=0,c=1;
        while(j<n){
            if(a[j]==a[i]){
                if(fr[j]>=0&&c){
                    fr[j]=1;
                    c=0;
                }
                else{
                    fr[j]=-1;
                }
            }
            j++;
        }
    }
    cout<<"before deletion: "<<endl;
    loop0(i,n){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"after deletion: "<<endl;
    loop0(i,n){
        if(fr[i]>=0){
            cout<<a[i]<<" ";
        }
    }
    cout<<endl<<"deleted elements: "<<endl;
    loop0(i,n){
        if(fr[i]<0){
            cout<<a[i]<<" ";    
        }
    }
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