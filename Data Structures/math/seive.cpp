#include<iostream>
#include<bitset>
#include<vector>
using namespace std;
// const int N=1e5+5;
bool seive(int N){
    vector<bool> v(N+1,true);
    v[1]=false;

    // bitset<N+1> v;
    // v.set();
    // v[1]=0;


    for(int i=2;i<N+1;i++){
        if(v[i]==true){
            for(int j=i*i;j<N+1;j+=i){
                v[j]=false;
            }
        }
    }
    for(int i=1;i<N+1;i++){
        if(v[i]==true){
            cout<<i<<" ";           //for printing prime
        }
    }
    return v[N+1];      // for checking prime
}
int main(){
    int n; cin>>n;
    seive(n);
}