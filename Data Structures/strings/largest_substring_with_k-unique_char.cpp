#include<bits/stdc++.h>
using namespace std;
#define formal ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ulli unsigned long long int
#define ll long long
#define ALL(x) (x).begin(),(x).end()
#define r(i,k) for( ll i=k;i>0;i--)
#define fr(i,k) for(ll i=0;i<k;i++)
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
void solve(){
    ll k,mx=0; cin>>k;
    string s; cin>>s;
    umci m;
    ll i=0,j=0;
    while(j<s.length()){
        m[s[j]]++;
        if(m.size()<k){
            j++;
        }
        else if(m.size()==k){
            mx=max(mx,j-i+1); j++;
        }
        else if(m.size()>k){
            while(m.size()>k){
                m[s[i]]--;
                if(m[s[i]]==0){
                    m.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    }
    cout<<mx<<endl;
}
int32_t main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
formal;
    ll t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}