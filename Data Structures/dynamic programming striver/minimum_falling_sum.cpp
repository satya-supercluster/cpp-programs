#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int testcases = 0;

void solve(vector<vector<int>> mat)
{
    int n = mat.size(), m = mat[0].size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 1e9));
    for (int i = 0; i <= m; i++)
        dp[0][i] = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; j++)
        {
            int up = dp[i - 1][j];
            int upleft = dp[i-1][j - 1];
            int upright = (j+1<=n)?dp[i-1][j + 1]:1e9;
            dp[i][j] = min({up, upleft,upright}) + mat[i - 1][j - 1];
        }
    }
    int mn = INT_MAX;
    for (int i = 0; i <= n; i++)
    {
        mn = min(mn, dp[n][i]);
    }
    // for (auto &i : dp)
    // {
    //     for (auto &j : i)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    cout << mn << endl;
}
void Main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (auto &i : mat)
    {
        for (auto &j : i)
        {
            cin >> j;
        }
    }
    solve(mat);
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("i1.txt",
            "r", stdin);
    freopen("o1.txt",
            "w", stdout);
    freopen("e1.txt",
            "w", stderr);
#endif
    auto start1 = chrono::high_resolution_clock::now();
    int t = 1;
    if (testcases)
    {
        cin >> t;
    }
    while (t--)
    {
        Main();
    }
    auto stop1 = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
    cerr << "Time: " << duration.count() / 1000.0 << " Seconds" << endl;
#endif
    return 0;
}