#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    vector<int> v(n);
    for(auto&i:v)cin>>i,sum+=i;
    if(sum&1){
        cout<<"NO"<<endl;
        return 0;
    }
    sum=sum/2;
    vector<vector<bool>> dp(n+1,vector<bool>(sum+1,false));
    for(int i=0;i<=n;i++)dp[i][0]=true;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(v[i-1]<=j) dp[i][j]=dp[i-1][j]||dp[i-1][j-v[i-1]];
            else dp[i][j]=dp[i-1][j];
        }
    }
    if(dp[n][sum]){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
    return 0;
}