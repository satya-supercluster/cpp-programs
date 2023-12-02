#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a<b) swap(a,b);
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<"gcd: "<<gcd(n,m)<<endl;
    return 0;
}