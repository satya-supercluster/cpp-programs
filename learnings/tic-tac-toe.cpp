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
    char arr[3][3];
    loop0(i,3){
        loop0(j,3){
            cin>>arr[i][j];
        }
    }
    loop0(i,3){
        if(arr[i][0]==arr[i][1]&&arr[i][0]==arr[i][2]){
            if(arr[i][0]!='.'){
            cout<<arr[i][0]<<endl;
            return;
            }
        }
    }
    loop0(i,3){
        if(arr[0][i]==arr[1][i]&&arr[0][i]==arr[2][i]){
            if(arr[0][i]!='.'){
            cout<<arr[0][i]<<endl;
            return;
            }
        }
    }
    if(arr[0][0]==arr[1][1]&&arr[0][0]==arr[2][2]){
        if(arr[0][0]!='.'){
            cout<<arr[0][0]<<endl;
            return;
        }
    }
    if(arr[2][0]==arr[1][1]&&arr[0][2]==arr[2][0]){
        if(arr[2][0]!='.'){
            cout<<arr[2][0]<<endl;
            return;
        }
    }
    cout<<"DRAW"<<endl;
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