#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t; cin>>t;
    set<int> k;
    int  n; cin>>n;
    while(n--){
        int c; cin>>c;
        k.insert(c);
    }
    cin>>n;
    while(n--){
        int c; cin>>c;
        k.insert(c);
    }
    int sum=0;
    for(auto& i:k){
        sum+=i;
    }
    if(sum==(t*t+t)/2){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
    return 0;
}
