#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long n,k,cn=0,ans,temp;
        cin>>n>>k;
        temp=n;
        while(n){
            cn++;
            n/=2;
        }
       if(log2(temp)<k){
        ans=temp+1;
       }
      else{
        ans=(1LL)<<k;
      }
       cout<<ans<<endl;
    }
    return 0;
}