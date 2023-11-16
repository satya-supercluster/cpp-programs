#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    vector<int> v;
    stringstream ss(str);
    while(ss.good())
    {
        string str2;
        getline(ss,str2,',');
        v.push_back(stoi(str2));
    }
    vector<int> :: iterator p;
    for(p=v.begin();p!=v.end();p++)
    {
        cout<<*p<<endl;
    }
    return 0;
}