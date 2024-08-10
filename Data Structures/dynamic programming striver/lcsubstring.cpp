#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int testcases = 0;
void LCS(string s1, string s2, string &lcs, int &len)
{
    int n = s1.size(), m = s2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i{1}; i <= n; i++)
    {
        for (int j{1}; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
        }
    }
    lcs = "";
    len=0;
    int x, y;
    for (int i{}; i <= n;++i)
    {
        for (int j{}; j <= m;j++)
        {
            if(len<dp[i][j]){
                len = max(len, dp[i][j]);
                x = i;
                y = j;
            }
        }
    }
    int c = len;
    while(c--){
        lcs.push_back(s1[x - 1]);
        x--;
        y--;
    }
    reverse(begin(lcs), end(lcs));
}

void Main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int lcsLen{};
    string lcs = "";
    LCS(s1, s2, lcs, lcsLen);
    cout << "LCS Length: " << lcsLen << endl;
    cout << "LCS: " << lcs << endl;
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