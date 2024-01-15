#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
#include<set>
#include<unordered_set>
#include<deque>
#include<stack>
#include<string>
#include<algorithm>
#include<cstdint>
#include <bits/stdc++.h>
using namespace std;
// #define int long long int
#define endl "\n"
const int testcases = 1;

void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    multiset<int> ms;
    for(int i=0;i<n;i++){
        cin>>v[i];
        ms.insert(v[i]);
    }
    map<int,int> m,sum;
    int k=0;
    for(auto&i:ms){
        m[i]=m[k]+1;
        sum[i]=sum[k]+i;
        k=i;
        cout<<m[i]<<" "<<endl;
    }
    // cout<<endl;
    for(int i=0;i<n;i++){
        cout<<m[v[i]]-1<<" ";
    }
    cout<<endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    if (testcases)
    {
        cin >> t;
    }
    while (t--)
    {
        solve();
    }
    return 0;
}