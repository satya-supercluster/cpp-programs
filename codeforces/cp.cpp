#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int testcases=1;
vector<int> helper(string s){
    vector<int> v;
    for(int i=0;i<s.length();i++){
        while((!v.empty())&&(s[i]>s[v.back()])){
            v.pop_back();
        }
        // cout<<"j"<<endl;
        v.push_back(i);
    }
    return v;
}
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    std::vector<int> v;
    v=helper(s);
    int ff=v[0],ex{};
    for(int i=0;i<n;i++){
        if(s[i]==s[ff])ex++;
    }
    for(int i=0;i<v.size()/2;i++){
        swap(s[v[i]],s[v[v.size()-i-1]]);
    }
    // cout<<s<<" "<<v.size()<<endl;
    if(is_sorted(begin(s), end(s)))cout<<v.size()-ex<<endl;
    else cout<<"-1"<<endl;
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