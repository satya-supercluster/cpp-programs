#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int testcases=0;
void solve(){
    int n,k;
    string s;
    cin>>n>>k>>s;
    string ans;
    int t = (n - k) / 2;
    for (auto c : s) {
        if (c == '(') {
            ans += c;
        } else if (t) {
            t--;
            ans.pop_back();
        } else {
            ans += c;
        }
    }
    cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("i1.txt", "r", stdin);
        freopen("o1.txt", "w", stdout);
        freopen("e1.txt", "w", stderr);
    #endif
    auto start1 = chrono::high_resolution_clock::now();
    int t = 1;
    if (testcases)
    {
        cin >> t;
    }
    while (t--)
    {
        solve();
    }
    auto stop1 = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(stop1 - start1);
    #ifndef ONLINE_JUDGE
        cerr << "Time: " << duration.count() / 1000.0 << " Seconds"<<endl;
    #endif    
    return 0;
}