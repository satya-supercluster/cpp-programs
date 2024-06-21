#include <bits/stdc++.h>
using namespace std;
// #define int long long int
#define endl "\n"
const int testcases = 0;
set<vector<pair<int, int>>> ans;
vector<pair<int, int>> dir = {{0, -1}, {1, 0}, {-1, 0}, {0, 1}};
void dfs(vector<vector<int>> &mat, vector<pair<int, int>> &island, int i, int j, int &mx, int &my)
{
    int n = mat.size();
    int m = mat[0].size();
    for (int pos=0; pos < 4; pos++)
    {
        int x = i + dir[pos].first;
        int y = j + dir[pos].second;
        if (x >= 0 and x < n and y >= 0 and y < m and mat[x][y] == 1)
        {
            mx = min(mx, x);
            my = min(my, y);
            island.emplace_back(x, y);
            mat[x][y] = 2;
            dfs(mat, island, x, y, mx, my);
        }
    }
}
void solve(vector<vector<int>> &mat)
{
    int n = mat.size(); 
    int m = mat[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 1)
            {
                int mx = i;
                int my = j;
                vector<pair<int, int>> island;
                mat[i][j] = 2;
                island.emplace_back(i, j);
                dfs(mat, island, i, j, mx, my);
                for (auto &ele : island)
                {
                    ele.first -= mx;
                    ele.second -= my;
                }
                sort(island.begin(), island.end(), [](const auto &a, const auto &b){
                            if (a.first != b.first) {
                                return a.first < b.first;
                            }
                            return a.second < b.second; }
                );
                ans.insert(island);
            }
        }
    }
    cout<<ans.size() << endl;
}
void Main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (auto &i : mat)
        for (auto &j : i)
            cin >> j;
    solve(mat);
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("in.txt",
            "r", stdin);
    freopen("out.txt",
            "w", stdout);
    freopen("err.txt",
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