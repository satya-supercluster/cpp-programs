#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int testcases = 0;
void solve(vector<vector<int>> &graph)
{
    int n = graph.size();
    vector<bool> vis(n, false);
    queue<int> q;
    q.push(0);
    vis[0] = true;
    while(!q.empty()){
        int sz = q.size();
        for (int i{}; i < sz;i++){
            auto element = q.front();
            q.pop();
            cout << element << " ";
            for(auto child:graph[element]){
                if(!vis[child]){
                    q.push(child);
                    vis[child] = true;
                }
            }
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