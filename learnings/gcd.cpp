#include<bits/stdc++.h>
using namespace std;
long long gcd(long long x, long long y){
    if(x<y) swap(x,y);
    // if(x%y==0) return y;
    if(y==0) return x;
    return gcd(y,x%y);
}
int main(){
    long long p,q;
    cin>>p>>q;
    cout<<((p*q)/gcd(p,q))<<endl;
    // cout<<__gcd(p,q)<<endl;
    return 0;
}