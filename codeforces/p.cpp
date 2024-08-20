#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a).size()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define M 1000000007
#define cY cout << "YES\n"
#define cN cout << "NO\n"
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

void TestCase()
{
    // solution for each test case
    int num;
    cin >> num;
    vector<vector<int>> edges;
    stack<pair<int, int>> query;
    for (int i = 2; i <= num; i++)
    {
        query.push({1, i});
    }
    vector<int> arr(num, 0);
    while (edges.size() < num - 1)
    {
        pair<int, int> t = query.top();
        query.pop();
        if (arr[t.first] == 1 && arr[t.second] == 1)
        {
            continue;
        }
        cout << "? " << t.first << " " << t.second << endl;
        cout.flush();
        int a;
        cin >> a;
        if (a == t.first)
        {
            edges.push_back({t.first, t.second});
            arr[t.first] = 1;
            arr[t.second] = 1;
        }
        else
        {
            query.push({t.first, a});
            query.push({a, t.second});
        }
    }
    cout << "! ";
    for (int i = 0; i < num - 1; i++)
    {
        cout << edges[i][0] << " " << edges[i][1] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t-- > 0)
    {
        TestCase();
    }

    return 0;
}