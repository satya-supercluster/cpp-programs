#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v,a(n);
    for(auto&i:a) cin>>i;
    stack<int> s;
    for(int i=0;i<n;i++){
        if(s.empty()){
            v.push_back(-1);
            s.push(i);
        }
        else if(a[s.top()]>a[i]){
            v.push_back(s.top());
            s.push(i);
        }
        else if(a[s.top()]<=a[i]){
            while((!s.empty())&&a[s.top()]<=a[i]){
                s.pop();
            }
            if(s.empty())v.push_back(-1);
            else if(a[s.top()]>a[i]) v.push_back(s.top());
            s.push(i);
        }
    }
    for(int i=0;i<n;i++){
        if(v[i]==-1){
            v[i]=i+1;
        }
        else{
            v[i]=i-v[i];
        }
    }
    for(auto i:v) cout<<i<<" ";
    return 0;
}