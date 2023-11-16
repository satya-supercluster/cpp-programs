#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v1,v2,v3;
        while(n--){
            int i; cin>>i;
            string k; cin>>k;
            if(k=="11") v3.push_back(i);
            else if(k=="01") v2.push_back(i);
            else if(k=="10") v1.push_back(i);
        }
        if(v3.empty())
        if(v1.empty()){
            cout<<"-1"<<endl; continue;
        }
        else if(v2.empty()){
            cout<<"-1"<<endl; continue;
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        sort(v3.begin(),v3.end());
        if(v3.empty()){
            cout<<v1[0]+v2[0]<<endl;
        }
        else if(v1.empty()||v2.empty()){
            cout<<v3[0]<<endl;
        }
        else{
            if(v3[0]<(v1[0]+v2[0])) cout<<v3[0]<<endl;
            else cout<<(v1[0]+v2[0])<<endl;
        }
    }
    return 0;
}