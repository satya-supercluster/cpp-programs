#include<bits/stdc++.h>
using namespace std;
long long power(long long a,long long b){
    long long res{1ll};
    while(b){
        if(b&1ll)
            res = res * 1ll * a;
        b /= 2ll;
        a = a * 1ll * a;
    }
    return res;
}
int main(){
    string s;
    cin>>s;
    long long ans{};
    for (int i = 0; i < s.length();i++){
        ans += (s[i] - 'a' + 1) * 1ll*power(20, s.length()-i-1);
    }
    cout << ans << endl;
    return 0;
}