#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    int n; cin>>n;
    while(n--){
        int k; cin>>k;
        s.push(k);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}