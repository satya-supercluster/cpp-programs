#include<bits/stdc++.h>using namespace std;int erase(int n,int index,string &str,map<string,int>&mpp,vector<string>&v){    if(str.size()==1){        return 1;        // cout<<"check1";    }    int ways=1;    string g="";    g=str[0];    str.erase(0,1);    if(mpp[str]==0){        v.push_back(str);        ways+=erase(n,0,str,mpp,v);        mpp[str]++;        str=g+str;        // cout<<"check2";    }    swap(str[0],str[1]);    str.erase(0,1);    if(mpp[str]==0){        v.push_back(str);        ways+=erase(n,0,str,mpp,v);        mpp[str]++;        str=g+str;                // cout<<"check2";    }    swap(str[1],str[0]);        // cout<<"check4";    return ways;}int main(){    freopen("i1.txt", "r", stdin);    freopen("o1.txt", "w", stdout);    int t;    cin>>t;    while(t>0){        map<string,int>mpp;        int n;        cin>>n;        string g="";        vector<string>v;        string str;        cin>>str;        erase(n-1,0,str,mpp,v);        for(auto i:v){        cout<<i<<endl;        }        t--;        cout<<endl;    }}