#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int testcases = 0;
void Main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (auto &i : mat)
        for (auto &j : i)
            cin >> j;
    vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 2)
            {
                q.push({i, j});
            }
        }
    }
    int count;
    for (count = -1; !q.empty(); count++)
    {
        int sz = q.size();
        for (int j{}; j < sz; j++)
        {
            auto pos = q.front();
            q.pop();
            for (int dr{}; dr < 4; dr++)
            {
                int x = pos.first + dir[dr].first;
                int y = pos.second + dir[dr].second;
                if (x >= 0 and x < n and y >= 0 and y < m and mat[x][y] == 1)
                {
                    mat[x][y] = 2;
                    q.push({x, y});
                }
            }
        }
    }
    for (int i{}; i < n;i++){
        for (int j{}; j < m;j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
        for (auto &i : mat)
            for (auto &j : i)
                if (j == 1)
                    return void(cout << "Impossible" << endl);
    cout << "Time:" << count << " Minutes" << endl;
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