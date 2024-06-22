#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int testcases = 0;
void dfs(int i, vector<vector<int>> &graph, vector<bool> &vis, vector<bool> &pVis,bool&cycle)
{
    if(cycle)
        return;
    vis[i] = true;
    pVis[i] = true;
    for(auto&child:graph[i]){
        if(vis[child]==false){
            dfs(child, graph, vis, pVis, cycle);
        }
        else if(pVis[child]==true){
            cycle = true;
            return;
        }
    }
    pVis[i] = false;
}
void solve(vector<vector<int>> &graph)
{
    int n = graph.size();
    vector<bool> vis(n, false),pVis(n,false);
    bool cycle = false;
    for (int i{}; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i, graph, vis,pVis,cycle);
        }
        if (cycle)
        {
            cout << "There is a cycle detected" << endl;
            return;
        }
    }
    cout << "There is no cycle" << endl;
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