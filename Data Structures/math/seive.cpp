#include<iostream>
using namespace std;
void seive(vector<bool>&v){
    int N=v.size()-1;
    v[0]=v[1]=true;
    for(int i=2;i*i<=N;i++){
        if(v[i]==false){
            for(int j=i*i;j<=N;j+=i){
                v[j]=true;
            }
        }
    }
}
int main(){
    int n; cin>>n;
    vector<bool> v(n+1,false);
    for(int i=0;i<=n;i++)if(!v[i])cout<<i<<" ";
    cout<<endl;
    return 0;
}