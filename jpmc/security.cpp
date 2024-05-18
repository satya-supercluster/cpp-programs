#include <iostream>
#include <vector>
#include <climits>
using namespace std;
#define ll long long
ll solve(vector<ll>&a,ll k)
{
    ll n=a.size();
    vector<ll>dp(n);
    for(ll i=n-1;i>=0;i--)
    {
        if(i+k<n) dp[i]=a[i]+dp[i+k];
        else dp[i]=a[i];
    }
    ll ans=INT_MIN;
    for(auto it:dp) ans=max(ans,it);
    return ans;
}

int main() {
    int n, k;
    cin >> n;
    
    vector<ll> security_val(n);
    for (int i = 0; i < n; ++i) {
        cin >> security_val[i];
    }

    cin >> k;

    cout<<solve(security_val,k);

   
}