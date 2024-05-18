#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v = {0, 1, 2, 5, 10, 20, 50};
    vector<vector<int>> dp(7, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; i++)
        dp[0][i] = INT_MAX;
    for (int i = 0; i <= n; i++)
        dp[1][i] = i * v[1];
    for (int i = 2; i <= 6; i++)
        for (int j = 1; j <= n; j++)
            if (v[i] <= j)
                dp[i][j] = min(dp[i - 1][j], 1 + dp[i][j - v[i]]);
            else
                dp[i][j] = dp[i - 1][j];
    cout << dp[6][n] << endl;
}