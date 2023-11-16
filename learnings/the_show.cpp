#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        int x[n];
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        sort(x,x+n);
        unordered_map<int,int> mp;
        int max=-1,min=m+1;
        for(int i=n-1;i>=0;i--){
            if(x[i]>0){
                mp[x[i]]++;
                if(min>i) min=i;
                if(max<i) max=i;
            }
            if(x[i]==-1){
                if(min!=m+1&&min!=0){
                    mp[min-1]++;
                    min--;
                }
            }
            if(x[i]==-2){
                if(max!=-1&&max!=m){
                    mp[max+1]++;
                    max++;
                }
            }
        }
        cout<<mp.size()<<endl;
    }
    return 0;
}