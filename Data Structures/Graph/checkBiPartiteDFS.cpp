#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int testcases = 0;
void dfs(int i, vector<vector<int>> &graph, vector<int> &col, bool &biPartite, int x)
{
    if (!biPartite)
        return;
    col[i] = x;
    for (auto &child : graph[i])
    {
        if (col[child] == -1)
        {
            dfs(child, graph, col, biPartite, !x);
        }
        else if (col[child] == col[i])
        {
            biPartite = false;
            return;
        }
    }
}
void solve(vector<vector<int>> &graph)
{
    int n = graph.size();
    vector<int> col(n, -1);
    bool biPartite = true;
    for (int i{}; i < n; i++)
    {
        if (col[i] == -1)
        {
            col[i] = 0;
            dfs(i, graph, col, biPartite, 1);
        }
        if (!biPartite)
        {
            return void(cout << "Not a Bi-Partite Graph" << endl);
        }
    }
    return void(cout << "Bi-Partite Graph" << endl);
}
void Main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> graph(n);
    while (e--)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    solve(graph);
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
