#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int testcases = 0;

void bfs(vector<vector<int>> &graph, vector<bool> vis, vector<int> &indegree, vector<int> &ans)
{
    queue<int> q;
    for (int k{}; k < indegree.size(); k++)
    {
        if (indegree[k] == 0)
        {
            q.push(k);
        }
    }
    while (!q.empty())
    {
        int sz = q.size();
        for (int pos{}; pos < sz; pos++)
        {
            auto ele = q.front();
            q.pop();
            vis[ele] = true;
            ans.push_back(ele);
            for(auto&child:graph[ele]){
                indegree[child]--;
                if(indegree[child]==0){
                    q.push(child);
                }
            }
        }
    }
}

void solve(vector<vector<int>> &graph, vector<int> &indegree)
{
    int n = graph.size();
    vector<bool> vis(n, false);
    vector<int> ans;
    bfs(graph, vis, indegree, ans);
    for (auto &i : ans)
        cout << i << " ";
    cout << endl;
}
void Main()
{
    int n;
    cin >> n;
    vector<vector<int>> graph(n);
    vector<int> indegree(n, 0);
    int e;
    cin >> e;
    while (e--)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        indegree[v]++;
    }
    solve(graph, indegree);
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