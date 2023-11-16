#include<iostream>
using namespace std;
int MOD = 1e9+7;
int binpow(int x, int y){
    int ans=1;
    while(y){
        if(y&1) ans=(1ll*x*ans)%MOD;
        x=(1ll*x*x)%MOD;
        y>>=1;
    }
    return ans;
}
int mult(int x, int y){
    int ans=0;
    while(y){
        if(y&1) ans=(ans+x)%MOD;
        x=(1ll*x*2)%MOD;
        y>>=1;
    }
    return ans;
}
int main(){
    int x,y;cin >> x>>y;
    cout<<binpow(x,y)<<endl;
    cout<<mult(x,y)<<endl;
    return 0;
}