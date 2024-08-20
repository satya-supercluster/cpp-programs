#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        vector<int> v(26, 0);
        for(auto&i:s)v[i - 'a']++;
        sort(rbegin(v), rend(v));
        int mx = v[0],sum{};
        for (int i = 1; i < v.size();i++)sum += v[i];
        if (sum >= mx)cout << mx + sum << endl;
        else cout << 2 * sum << endl;
    }
    return 0;
}