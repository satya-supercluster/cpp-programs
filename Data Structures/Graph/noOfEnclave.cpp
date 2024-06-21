#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int testcases = 0;
vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
void dfs(int i,int j,vector<vector<int>> &mat){
    int n = mat.size();
    int m = mat[0].size();
    for (int pos{}; pos < 4;pos++){
        int x = i + dir[pos].first;
        int y = j + dir[pos].second;
        if(x>=0 and x<n and y>=0 and y<m and mat[x][y]==1){
            mat[x][y] = 2;
            dfs(x, y, mat);
        }
    }
}
void Main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for(auto&i:mat)for(auto&j:i)cin >> j;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if((i==0 || j==0 || i==n-1 || j==m-1) and mat[i][j]==1){
                dfs(i, j,mat);
            }
        }
    }
    int ans{};
    for(auto&i:mat)for(auto&j:i)if(j==1)ans++;
    cout << ans << endl;
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