#include<iostream>
#include<vector>
using namespace std;
// int gcd(int a,int b){
//     if(a<b) swap(a,b);
//     if(b==0) return a;
//     return gcd(b,a%b);
// }
vector<int> extended(int a,int b){
    // if(a<b) swap(a,b);
    if(b==0){
        return {1,0,a};
    }
    vector<int> v=extended(b,a%b);
    return {v[1],v[0]-a/b*v[1],v[2]};
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v;
    v=extended(n,m);
    cout<<"x: "<<v[0]<<endl<<"y: "<<v[1]<<endl<<"gcd: "<<v[2]<<endl;
    return 0;
}