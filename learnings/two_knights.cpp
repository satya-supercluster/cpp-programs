#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    for(int k=1;k<=n;k++){
        long long all=1LL*(k*k)*(k*k-1)/2;
        long long rej=1LL*4*(k-1)*(k-2);
        cout<<all-rej<<endl;
    }
    return 0;
}