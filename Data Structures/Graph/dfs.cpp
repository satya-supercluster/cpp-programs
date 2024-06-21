#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int testcases = 0;
void dfs(int i,vector<vector<int>> &graph, vector<bool> &vis)
{
    //Area to perform things before passing to first child of it
    vis[i] = true;
    cout << i << " ";
    for(auto child:graph[i]){
        //Area to perform things before passing to child of it
        if(!vis[child]) dfs(child, graph, vis);
        //Area to perform things after passing to child of it
    }
    //Area to perform things after passing to all the child of it
}
void solve(vector<vector<int>>& graph)
{
    int n = graph.size();
    vector<bool> vis(n, false);
    for (int i{}; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i,graph, vis);
        }
    }
}
void Main()
{
    int n;
    cin >> n;
    vector<vector<int>> graph(n);
    int e;
    cin >> e;
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