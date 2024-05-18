#include<bits/stdc++.h>
using namespace std;
int sol(vector<int>&v)
{
    int ans1{},ans2{};
    int n = v.size();
    vector<int> v1 = v;
    vector<int> v2 = v;
    for (int i = 0; i < n;i++){
        if(i%2){
            if(v[i]%2){
                while(v1[i]%2!=0){
                    ans1++;
                    v1[i] /= 2;
                    if (!v1[i])
                        break;
                }
            }
            else{
                while(v2[i]%2!=1){
                    ans2++;
                    v2[i] /= 2;
                    if (!v2[i])
                        break;
                }
            }
        }
        else{
            if (v[i] % 2)
            {
                while (v2[i] % 2 != 0)
                {
                    ans2++;
                    v2[i] /= 2;
                    if (!v2[i])
                        break;
                }
            }
            else
            {
                while (v1[i] % 2 != 1)
                {
                    ans1++;
                    v1[i] /= 2;
                    if (!v1[i])
                        break;
                }
            }
        }
    }
    return min({ans1, ans2});
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto&i:v)cin>>i;
    cout << sol(v) << endl;
    return 0;
}