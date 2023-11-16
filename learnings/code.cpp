#include<bits/stdc++.h>
using namespace std;
#define formal ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ulli unsigned long long int
#define ll long long
#define ALL(x) (x).begin(),(x).end()
#define r(i,k) for(i=k;i>0;i--)
#define fr(i,k) for(int i=0;i<k;i++)
#define f(i,k) for(int i=1;i<=k;i++)
#define MOD 1e9+7
#define mp make_pair
#define fi first
#define se second
#define pb push_back
typedef vector<ll> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef unordered_set<ll> usi;
typedef unordered_map<ll,ll> umii;
typedef unordered_map<ll,string> umis;
typedef unordered_map<ll,char> umic;
typedef pair<ll,ll> pii;
bool palindrome(ll k){
    ll rev=0,temp=k;
    while(k){
        rev=rev*10+k%10;
        k/=10;
    }
    if(rev==temp) return true;
    else return false;
}
bool strequal(string s1,string s2){
    if(s1.length()!=s2.length()) return false;
    else{
        fr(i,s1.length()){
            if(s1[i]!=s2[i]) return false;
        }
        return true;
    }
}
bool all_equal(vi v){
    if(adjacent_find(v.begin(), v.end(),not_equal_to<>() ) == v.end() )
    {
        return true;
    }
    else return false;
}
void solve(){
   ll n; cin>>n;
   vi v(n);
   fr(i,n){
       cin>>v[n];
   }
   while(!all_equal(v)){
       sort(v.begin(),v.end());
       v[n-1]=v[n-1]-v[0];
   }
   cout<<v[0]<<endl;
}
int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    formal;
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}