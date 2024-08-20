#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int testcases = 0;
int mod = 1e9 + 7;
int getHash(string&s){
    int h{};
    for (auto&c:s){
        h = (h * 31 + (int)(c - 'a' + 1))%mod;
    }
    return h;
}
void Main()
{
    map<int, int> mp;
    int collision{};
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        if(x==1){
            string str;
            cin >> str;
            int x = getHash(str);
            if (mp.count(x))
            {
                collision++;
            }
            mp[x] = 1;
        }
        else if(x==2){
            string str;
            cin >> str;
            int x = getHash(str);
            if (mp.count(x))
            {
                cout << "Present" << endl;
            }
            else{
                cout << "Absent" << endl;
            }
        }
    }
    cout << "Collisions: " << collision << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("i1.txt",
            "r", stdin);
    freopen("o1.txt",
            "w", stdout);
    freopen("e1.txt",
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