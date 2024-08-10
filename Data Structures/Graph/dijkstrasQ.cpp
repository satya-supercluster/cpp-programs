#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int testcases = 0;

void solve(vector<vector<pair<int, int>>> &adj, int src)
{
    int n = adj.size();
    const int INF = 1e9;
    vector<int> dist(n, INF);
    dist[src] = 0;
    queue<pair<int, int>> q;
    q.push({0, src});
    while (!q.empty())
    {
        auto [d, u] = q.front();
        q.pop();
        for (auto &[v, w] : adj[u])
        {
            // Relaxation
            if (dist[v] > d + w)
            {
                dist[v] = d + w;
                q.push({dist[v], v});
            }
        }
    }
    for (auto &i : dist)
    {
        cout << i << " ";
    }
    cout << endl;
}
void Main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<pair<int, int>>> adj(n);
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    int src;
    cin >> src;
    solve(adj, src);
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