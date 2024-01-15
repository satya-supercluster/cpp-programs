#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum;
    cin>>n>>sum;
    int arr[n]={};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool dp[n+1][sum+1];
    for(int i=0;i<=sum;i++){
        dp[0][i]=false;
    }
    for(int i=0;i<=n;i++){
        dp[i][0]=true;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(arr[i-1]<=j){
                dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    if(dp[n][sum]){
        cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
    return 0;
}