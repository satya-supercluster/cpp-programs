#include <iostream>
#include<bits/stdc++.h>
#define Mod 1000000007
#define N 100001
#define ll long long
#define inf 1e9 
using namespace std;

void solve(){
  int n,k;cin>>n>>k;
  string a;cin>>a;
  int pr[n+1];
  pr[1] = 1;
  for(int i=1;i<n;i++){
    if(a[i-1]!=a[i])pr[i+1] = 1+pr[i];
    else pr[i+1]=pr[i];
  }
  int ans = n;int k1=n;
  for(int i=1;i<=n-k+1;i++){
    if(a[i+k-2]=='0')k1 = pr[i+k-1]-pr[i]+1;
    else k1 = pr[i+k-1]-pr[i];
    ans = min(ans,k1);
  }
  cout<<ans<<"\n";
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);cout.tie(nullptr);
    int t;cin>>t;
    for(int i=1;i<=t;i++){
        //cout<<"Case #"<<i<<": ";
        solve();
    }
  return 0;
}