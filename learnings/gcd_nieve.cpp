#include<iostream>
using namespace std;
int main(){
    int n,m,gcd=1;
    cin>>n>>m;
    for(int i=1;i<=min(n,m);i++){
        if(n%i==0&&m%i==0) gcd=i;
    }
    cout<<"gcd: "<<gcd<<endl;
}