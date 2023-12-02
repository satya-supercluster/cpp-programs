#include<iostream>
using namespace std;
int m=1e9+7;
int power(int a,int b){
    int res=1;
    while(b){
        if(b&1) res=(res*a)%m;
        a=(a*a)%m;
        b/=2;
    }
    return res;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<(power(a,b)+m)%m<<endl;
    return 0;
}