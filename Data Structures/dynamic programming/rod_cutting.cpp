#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,rod_length;
    cin>>n>>rod_length;
    vector<int> length(n),profit(n);
    for(auto&i:length)cin>>i;
    for(auto&i:profit)cin>>i;
    vector<vector<int>> dp(n+1,vector<int>(rod_length+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=rod_length;j++){
            if(length[i-1]<=j){
                dp[i][j]=max(dp[i-1][j],profit[i-1]+dp[i][j-length[i-1]]);
            }
            else dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][rod_length]<<endl;
    return 0;
}