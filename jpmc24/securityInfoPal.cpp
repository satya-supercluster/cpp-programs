#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;
    int ans{};
    for (int i = n - 1; i >= n - k; i--)
    {
        int c{};
        for (int p = i; p >= 0; p -= k)
        {
            c += a[p];
            ans = max(ans, c);
        }
    }
    cout << ans << endl;
}