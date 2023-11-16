#include<iostream>
#include<vector>
using namespace std;
#define sz(x)   (int)size(x)
using ll= long long;
using vl=vector<ll>;
vl psum(vl &v){
    vl psum(sz(v)+1);
    for(int i=0;i<v.size();i++){
        psum[i+1]=psum[i]+v[i];
    }
    return psum;
}
int main(){
    int s;
    vl vec;
    cout<<"Enter the size: ";
    cin>>s;
    vl v(s);
    for(int i=0;i<s;i++){
        cin>>v[i];
    }
    vec=psum(v);
    int q;
    cout<<"Enter the number of test cases: ";
    cin>>q;
    while(q--){
        int start,end;
        cout<<"Enter start and end index: ";
        cin>>start>>end;
        cout<<vec[end-1]<<" "<<vec[start-1]<<endl;
        cout<<"Sum="<<vec[end ]-vec[start];
    }
    return 0;
}