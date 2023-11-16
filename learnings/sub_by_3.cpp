#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;
        bool p=true;
        cin>>n;
        while(n){
            if(n%3==2){
                p=false;
            }
            n/=3;
        }
        if(p){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}