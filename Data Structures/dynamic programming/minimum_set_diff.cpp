#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    vector<int> v(n);
    for(auto&i:v)cin>>i,sum+=i;
    vector<vector<bool>> dp(n+1,vector<bool>((sum+1)/2+1,false));
    for(int i=0;i<=n;i++)dp[i][0]=true;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(sum+1)/2;j++){
            if(v[i-1]<=j){
                dp[i][j]=dp[i-1][j]||dp[i-1][j-v[i-1]];
            }
            else dp[i][j]=dp[i-1][j];
        }
    }
    int in=(sum+1)/2;
    for(;in>=0;in--){
        if(dp[n][in])break;
    }
    cout<<sum-in<<" "<<in<<endl;
    cout<<abs(in-(sum-in))<<endl;
    return 0;
}