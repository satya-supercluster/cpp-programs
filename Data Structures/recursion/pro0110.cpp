#include<iostream>
#include<cmath>
using namespace std;
int alpha(int n,int k){
    if(n==1&&k==1) return 0;
    int mid=pow(2,n-2);
    if(k<=mid){
        return alpha(n-1,k);
    }
    return !alpha(n-1,k-mid);
}
int main(){
    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<alpha(n,k)<<endl;
    }
    return 0;
}