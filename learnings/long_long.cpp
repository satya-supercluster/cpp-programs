#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long n,ans=0,p=0,c=1,i=0; cin>>n;
        long long a[n];
        vector<long long> b;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=0) ans+=a[i];
            else ans-=a[i];
            if(a[i]!=0){
                b.push_back(a[i]);
            }
        }
        if(b.size()==0){p=0;}
        else{
            for(long long i:b){
                if(i<0&&c){
                    p++;
                    c=0;
                }
                else if(i>0){
                    c=1;
                }
            }
        }
        cout<<ans<<" "<<p<<endl;
    }
    return 0;
}