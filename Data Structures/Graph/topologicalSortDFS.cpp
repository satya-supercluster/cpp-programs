#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int testcases = 0;
void dfs(int &i, stack<int> &s, vector<vector<int>> graph, vector<int> &vis)
{
    vis[i] = 1;
    for (auto &child : graph[i])
    {
        if (!vis[child])
        {
            dfs(child, s, graph, vis);
        }
    }
    s.push(i);
}
vector<int> topoSort(int n, vector<vector<int>> graph)
{
    stack<int> s;
    vector<int> vis(n, 0);
    for (int i{}; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i, s, graph, vis);
        }
    }
    vector<int> ans;
    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
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
    vector<int>ans=topoSort(n,graph);
    for(auto&i:ans){
        cout << i << " ";
    }
    cout << endl;
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