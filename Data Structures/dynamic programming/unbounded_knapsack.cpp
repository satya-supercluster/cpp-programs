#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,w;
    cin>>n>>w;
    vector<int> weight(n),profit(n);
    for(auto&i:weight)cin>>i;
    for(auto&i:profit)cin>>i;
    vector<vector<int>> dp(n+1,vector<int>(w+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=w;j++){
            if(weight[i-1]<=j){
                dp[i][j]=max(dp[i-1][j],profit[i-1]+dp[i][j-weight[i-1]]);
            }
            else dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][w]<<endl;
    return 0;
}