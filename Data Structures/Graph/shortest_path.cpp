#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int testcases = 0;
void dfs(int i, vector<vector<pair<int, int>>> &adj, vector<int> &vis, stack<int> &ans)
{
    vis[i] = 1;
    for(auto&child:adj[i]){
        if(!vis[child.first]){
            dfs(child.first, adj, vis,ans);
        }
    }
    ans.push(i);
}
stack<int> topoSort(vector<vector<pair<int, int>>> &adj)
{
    int n = adj.size();
    stack<int> ans;
    vector<int> vis(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i, adj, vis,ans);
        }
    }
    return ans;
}
void solve(vector<vector<pair<int, int>>> &adj)
{
    stack<int> srt = topoSort(adj);
    const int INF = 1e9;
    vector<int> dist(adj.size(), INF);
    int src = 3;
    dist[src] = 0;
    while((!srt.empty())&&(srt.top()!=src))
        srt.pop();
    while(!srt.empty()){
        int ele = srt.top();
        srt.pop();
        // Relaxation
        for(auto&child:adj[ele]){
            if(dist[child.first]>dist[ele]+child.second){
                dist[child.first] = dist[ele] + child.second;
            }
        } 
    }
    for(auto&i:dist){
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
    }
    solve(adj);
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