#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    int i,x,e;
    cin>>i;
    while(i--)
    {
        cin>>x;
        v.push_back(x);
    }
    cin>>e;
    v.erase(v.begin()+e-1);
    for(int var: v)
        cout<<var<<endl;

    return 0;
}