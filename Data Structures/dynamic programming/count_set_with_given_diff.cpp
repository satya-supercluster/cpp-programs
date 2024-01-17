#include<bits/stdc++.h>
using namespace std;
//Target Sum
int main(){
    int n,d,sum=0;
    cin>>n>>d;
    vector<int> v(n);
    for(auto&i:v)cin>>i,sum+=i;
    int req=(sum+d)/2;
    vector<vector<int>> dp(n+1,vector<int>(req+1,0));
    for(int i=0;i<=n;i++) dp[i][0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=req;j++){
            if(v[i-1]<=j){
                dp[i][j]=dp[i-1][j]+dp[i-1][j-v[i-1]];
            }
            else dp[i][j]=dp[i-1][j];
        }
    }
    // for(int i=0;i<=n;i++)count+=dp[i][req];
    cout<<dp[n][req]<<endl;
    return 0;
}