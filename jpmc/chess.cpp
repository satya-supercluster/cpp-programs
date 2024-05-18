#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
#define int long long int

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n,mx;
        cin >> n;
        vector<int> v(n);
        for(auto&i:v)
            cin >> i, mx = max(mx, i);
        int maxi = 0;
        int k;
        cin >> k;
        int i = 0,j=2,c{};
        while(j<n){
            if(v[i]==max)
            if(v[i]>v[j]){
                c++;
                j++;
                if(c==k){
                    cout << i << endl;
                    break;
                }
            }
            else{
                i = j;
                j++;
            }
        }
    }
}