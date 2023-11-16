#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> v;
    int x,s;
    cin>>x;
    while(x--)
    {
        cin>>s; v.push_back(s);
    }
    int p;
    cin>>p;
    v.erase(v.begin()+p-1);
    
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+a-1,v.begin()+b-1);
    for(int var: v)
    {
        cout<<var<<" ";
    }
    return 0;
}
