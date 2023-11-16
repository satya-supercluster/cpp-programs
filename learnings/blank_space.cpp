#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    unordered_map<int,int> mp;
    int k=0;
    for(int i=0; i<n; i++){
        if(a[i]==1) k++;
        else mp[k]++;
    }
    int max=0;
    for(auto it:mp){
        if(it.second>max)max=it.second;
    }
    cout<<max<<endl;
    }
}