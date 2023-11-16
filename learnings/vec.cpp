#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    vector<int>::iterator it;
    int i,x;
    cin>>i;
    while(i--)
    {
        cin>>x;
        v.push_back(x);
    }    
    sort(v.begin(),v.end());
    for(int i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    it=find(v.begin(),v.end(),5);
    if(it!=(v.end())) cout<<it-v.begin()+1<<endl;
    else cout<<"5 not found"<<endl;
    reverse(v.begin(),v.end());
    for(int i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<v.end()-v.begin()<<endl;
    cout<<*v.begin()<<endl;
    cout<<*(v.end()-1)<<endl;
    return 0;
}