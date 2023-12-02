#include<iostream>
using namespace std;
int m=1e9+7;
int mul(int a,int b){
    int res=0;
    while(b){
        if(b&1) res=(res+a)%m;
        a=(a+a)%m;
        b/=2;
    }
    return res;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<(mul(a,b)+m)%m<<endl;
    return 0;
}