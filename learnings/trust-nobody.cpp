#include<iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int ans=-1;
        for(int i=0; i<n; i++){
            int l=0;
            for(int j=0; j<n; j++){
                if(a[j]>i){
                    l++;
                }
            }
            if(i==l){
                ans=l;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}