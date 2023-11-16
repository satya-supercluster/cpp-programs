#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    int x;
    for(int i=0;i<5;i++){
        cin>>x;
        s.insert(x);
    }
     for(int i:s){
        cout<<i<<" ";
    }
    return 0;
}