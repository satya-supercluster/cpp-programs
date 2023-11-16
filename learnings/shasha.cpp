#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,cost=0; cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n/2;i++){
            cost+=a[n-i-1]-a[i];
        }
        cout<<cost<<endl;
    }
    return 0;
}