#include<bits/stdc++.h>
using namespace std;
#define formal ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ulli unsigned long long int
#define ll long long
#define ALL(x) (x).begin(),(x).end()
#define r(i,k) for(ll i=k;i>0;i--)
#define fr(i,k) for(int i=0;i<k;i++)
#define f(i,k) for(ll i=1;i<k;i++)
#define MOD 1000000007
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define pc pop_back
typedef vector<ll> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef unordered_set<ll> usi;
typedef unordered_map<ll,ll> umii;
typedef unordered_map<char,ll> umci;
typedef pair<ll,ll> pii;
// int fw(int* arr,int n,int k){
//     for(int i=0;i<n;i++){
//         if(arr[i]==k){
//             return i+1;
//         }
//     }
//     return 0;
// }
// int bw(int* arr,int n,int k){
//     for(int i=0;i<n;i++){
//         if(arr[n-i-1]==k){
//             return i+1;
//         }
//     }
//     return 0;
// }
void solve(){
    ll n,p=0,q=0;
    cin>>n;
    ll a[n];
    fr(i,n) cin>>a[i];
    ll fpre[n+1];
    fr(i,n){
        fpre[a[i]]=i+1;
    }
    ll bpre[n+1];
    fr(i,n){
        bpre[a[i]]=n-i;
    }
    ll m;
    cin>>m;
    ll b[m];
    fr(i,m) cin>>b[i];
    // fr(i,m){
    //     p+=fw(a,n,b[i]);
    //     q+=bw(a,n,b[i]);
    // }
    fr(i,m){
        p+=fpre[b[i]];
        q+=bpre[b[i]];
    }
    cout<<p<<" "<<q<<endl;
}
int32_t main()
{
// #ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif
// formll
    ll t=1;
    while(t--){
        solve();
    }
    return 0;
}