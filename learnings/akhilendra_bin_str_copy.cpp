#include<bits/stdc++.h>
using namespace std;

#define int               long long int
#define double            long double
#define vi                vector<int>
#define pii               pair<int, int>
#define inp0(a, n)        for(int i=0;i<n;i++)cin>>a[i]
#define inp1(a, n)        for(int i=1;i<=n;i++)cin>>a[i]
#define out0(a, n)        for(int i=0;i<n;i++)cout<<a[i]<<" "; cout<<"\n"
#define out1(a, n)        for(int i=1;i<=n;i++)cout<<a[i]<<" "; cout<<"\n"
#define pb                push_back
#define ff                first
#define ss                second

const int inf=1e18;
const int mod=1e9+7;
const double PI=(double)acos(-1);
const bool testcases=1;

void solve(){
  
  int n, m;
  string s;
  cin>>n>>m>>s;

  int pr[n+1][2];
  memset(pr, 0, sizeof pr);
  for(int i=1;i<=n;i++){
    pr[i][s[i-1]-'0']++;
    pr[i][0]+=pr[i-1][0];
    pr[i][1]+=pr[i-1][1];
  }
 
  set<pair<int, int>> st;
  bool ok=0;
  while(m--){
    int l, r;
    cin>>l>>r;

    int s=l, e=r;
    while(s<=e){
      int mid=(s+e)/2;
      if(pr[r][0]-pr[mid-1][0]==0){
        e=mid-1;
      }else{
        s=mid+1;
      }
    }

    r=e;
    s=l;
    while(s<=e){
      int mid=(s+e)/2;
      if(pr[mid][1]-pr[l-1][1]==0){
        s=mid+1;
      }else{
        e=mid-1;
      }
    }
    
    l=e;

    if(l>r)continue;
    if(l==r){
      ok=1;
      continue;
    }
    st.insert({l, r});
  }
  // for(auto [l, r]: st){
  //   cout<<l<<" "<<r<<"\n"; 
  // }
  cout<<st.size()+ok<<"\n";
}

int32_t main(){
#ifndef ONLINE_JUDGE
  freopen("f.in", "r", stdin);
  freopen("f.out", "w", stdout);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  int t=1;
  if(testcases)cin>>t;
  while(t--){
    solve();
  }
  
  return 0;
}