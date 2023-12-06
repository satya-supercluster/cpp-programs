#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int&i:a) cin>>i;
    stack<int> s;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(s.empty()){
            v.push_back(-1);
            s.push(a[i]);
        }
        else if(s.top()>a[i]){
            v.push_back(s.top());
            s.push(a[i]);
        }
        else if(s.top()<=a[i]){
            while((!s.empty())&&s.top()<=a[i]){
                s.pop();
            }
            if(s.empty())v.push_back(-1);
            else if(s.top()>a[i]) v.push_back(s.top());
            s.push(a[i]);
        }
    }
    for(auto&i:v) cout<<i<<" ";
    return 0;
}