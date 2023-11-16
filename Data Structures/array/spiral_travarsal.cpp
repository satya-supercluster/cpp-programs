#include <bits/stdc++.h>
using namespace std;
#define formal                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ulli unsigned long long int
#define ll long long
#define ALL(x) (x).begin(), (x).end()
#define r(i, k) for (int i = k; i > 0; i--)
#define fr(i, k) for (int i = 0; i < k; i++)
#define f(i, k) for (int i = 1; i <= k; i++)
#define MOD 1000000007
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define pc pop_back
typedef vector<ll> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef unordered_set<ll> usi;
typedef unordered_map<ll, ll> umii;
typedef unordered_map<ll, string> umis;
typedef unordered_map<ll, char> umic;
typedef pair<ll, ll> pii;
void solve()
{
    int n, k = 1;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = k;
            k++;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int top = 0, left = 0, right = n - 1, bottom = n - 1;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << arr[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right] << " ";
        }
        right--;
        for (int i = right; i >= left; i--)
        {
            cout << arr[bottom][i] << " ";
        }
        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            cout << arr[i][left] << " ";
        }
        left++;
    }
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}