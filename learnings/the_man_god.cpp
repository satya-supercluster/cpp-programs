#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int a[n];
        long long ans=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        vector<int> v;
        for(int i=1; i<n; i++){
            v.push_back(abs(a[i]-a[i-1]));
        }
        sort(v.begin(),v.end());
        for(int i=0; i<n-k; i++){
            ans+=v[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}