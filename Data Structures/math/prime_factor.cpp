#include<iostream>
#include<bitset>
#include<vector>
#include<set>
using namespace std;
// const int N=1e5+5;
void seive(int N){
    vector<set<int>> v(N+1);
    for(int i=2;i<=N;i++){
        if(v[i].size()==0){             //its prime
            for(int j=i;j<=N;j+=i){
                v[j].insert(i);
            }
        }
    }
    for(int i=2;i<=N;i++){
        cout<<"Prime factor of "<<i<<": ";
        for(auto it:v[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n; cin>>n;
    seive(10000);
}