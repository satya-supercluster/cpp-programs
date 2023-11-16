#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int n,c=0;
        string s;
        char ans;
        cin>>n;
        cin>>s;
        map<char,int> m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        for(auto it:m){
            c=max(c,it.second);
        }
        for(auto it:m){
            if(it.second==c){
                ans=it.first;
                break;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}