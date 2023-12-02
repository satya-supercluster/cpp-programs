#include<iostream>
#include<vector>
using namespace std;
#define ll long long
ll mod=1e9+7;
vector<int> extended(int a,int b){
    if(b==0){
        return {1,0,a};
    }
    vector<int> v=extended(b,a%b);
    return {v[1],v[0]-a/b*v[1],v[2]};
}
void modInverse(int a,int mod=mod){
    vector<int> v=extended(a,mod);
    if(v[2]!=1){
        cout<<"Inverse doesn't exists";

    }
    else{
        cout<<v[0];
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    v=extended(n,mod);
    cout<<"x: "<<v[0]<<endl<<"y: "<<v[1]<<endl<<"gcd: "<<v[2]<<endl<<"mmi: ";
    modInverse(n,mod);
    return 0;
}