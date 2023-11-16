#include<unordered_map>
#include<iostream>
using namespace std;
int main(){
    int n,k,ans=0;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    int pre[n];
    pre[0]=a[0];
    unordered_map<int,int> m;
    for(int i=1; i<n; i++) pre[i]=a[i]+pre[i-1];
    for(int i=0;i<n;i++){ pre[i]=pre[i]%k;
    pre[i]=(pre[i]+k)%k;
    m[pre[i]]++;
    }
    for(auto it:m){
        if(it.second>1){
            ans+=(it.second)*(it.second-1)/2;
        }
        if(it.second==1&&it.first==0){
            ans+=1;
        }
    }
    cout<<ans<<endl;
    return 0;
}