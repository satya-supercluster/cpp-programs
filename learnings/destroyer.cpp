#include<iostream>
#include<vector>
using namespace std;
int main(){
    int  t; cin>>t;
    while(t--){
        int n,p=1; cin>>n;
        vector<int> v(101,0);
        for(int i=0;i<n;i++){
            int j;
            cin>>j;
            v[j]++;
        }
        for(int i=1;i<101;i++){
            if(v[i]>v[i-1]){
                p=0;
                break;
            }
        }
        if(p){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}