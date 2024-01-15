#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum;
    cin>>n>>sum;
    vector<int> v(n);
    for(auto&i:v)cin>>i;
    vector<vector<int>> dp(n+1,vector<int>(sum+1,0));
    for(int i=0;i<=n;i++)dp[i][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(j>=v[i-1]){
                dp[i][j]=dp[i-1][j]+dp[i-1][j-v[i-1]];
            }
            else dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][sum]<<endl;
    return 0;
}