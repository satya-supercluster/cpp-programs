#include<bits/stdc++.h>
using namespace std;
#define formal ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ulli unsigned long long int
#define ll long long
#define ALL(x) (x).begin(),(x).end()
#define r(i,k) for( int i=k;i>0;i--)
#define fr(i,k) for(int i=0;i<k;i++)
#define f(i,k) for(int i=1;i<=k;i++)
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
typedef unordered_map<ll,string> umis;
typedef unordered_map<ll,char> umic;
typedef pair<ll,ll> pii;
void solve(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    set<vector<int>> s;
    sort(a,a+n);
    for(int i=0; i<n-2; i++){
        int c=a[i];
        int l=i+1,h=n-1;
        while(l<h){
            if(a[l]+a[h]==(-c)){
                vector<int>v;
                v.push_back(a[i]);
                v.push_back(a[l]);
                v.push_back(a[h]);
                s.insert(v);
                l++;h--;
            }
            else if(a[l]+a[h]<(-c)){
               l++;
            }
            else h--;
        }
    }
    for(auto it:s){
        cout<<it[0]<<" "<<it[1]<<" "<<it[2]<<endl;
    }
}
int32_t main()
{
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}