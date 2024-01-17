#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum;
    cin>>n>>sum;
    vector<int> v(n);
    for(auto&i:v)cin>>i;
    vector<vector<int>> dp(n+1,vector<int>(sum+1,0));
    for(int i=0;i<=sum;i++)
        dp[0][i]=INT_MAX-1;
    for(int i=1;i<=sum;i++)
        if(i%v[0]==0)
            dp[1][i]=i/v[0];
        else dp[1][i]=INT_MAX;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(v[i-1]<=j){
                dp[i][j]=min(dp[i-1][j],1+dp[i][j-v[i-1]]);
            }
            else dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][sum]<<endl;
    return 0;
}