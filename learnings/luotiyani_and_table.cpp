#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<long long> v(n*m);
        for(int i=0;i<n*m;i++){
            cin>>v[i];
        }
        int less,great;
        if(n>m) {less=m;great=n;}
        else {less=n; great=m;}
        sort(v.begin(),v.end());

        
        long long max2=v[v.size()-1];
        long long min1=v[0];
        long long min3=v[1];
        long long ans2=(n-1)*(m-1)*1LL*(max2-min1)+1LL*(max2-min3)*(less-1)+1LL*(max2-min1)*(great-1);


        long long max=v[0];
        long long min=v[v.size()-1];
        long long min2=v[v.size()-2];
        long long ans=(n-1)*(m-1)*1LL*(max-min)+1LL*(max-min2)*(less-1)+1LL*(max-min)*(great-1);



        if(-ans>ans2) cout<<-ans<<endl;
        else cout<<ans2<<endl;
    }
}