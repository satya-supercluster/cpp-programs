#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> v(3);
    for (int i = 0; i < 3; i++)
    {
        v[i] = "345fefdteydddggd";
    }
    vector<vector<string>> d(1, vector<string>(2));
    d[0] = {"GET", "http://gdtuyeheheehe.com/?token=345fefdteydddggd&id=64tygehdhd&name=satyam"};
    vector < vector<pair<string, string>>> data(d.size());
    for (auto &ele : d)
    {
        string url = ele[1];
        bool dom{1},key{},value{};
        string k,val;
        for (int i = 0; i < url.length();i++){
            if(dom){
                while(url[i]!='?')
                    i++;
                dom = 0;
                i++;
                key = 1;
            }
            if(key){
                k="";
                while (i < url.length() && url[i]!='='){
                    k.push_back(url[i++]);
                }
                i++;
                key = 0;
                value = 1;
                cout << k << endl;
            }
            if(value){
                val = "";
                while (i < url.length() && url[i] != '&'){
                    val.push_back(url[i++]);
                    cout << val
                         << " "<<i<<endl;
                }
                if (i < url.length() && url[i] == '&'){
                    key = 1;
                    i++;
                }
                pair<string, string> p;
                p.first = key;
                p.second = val;
                data[i].push_back(p);
                cout << val << endl;
                value = 0;
            }
        }
    }
    vector<string> ans(d.size());
    for (int i {}; i < d.size(); i++)
    {
        for(auto&ele:data[i]){
            string key = ele.first, val = ele.second;
            bool ok = false;
            if(key=="token"){
                for (int k = 0; k < v.size(); k++)
                {
                    if(v[i]==val){
                        ok=true;
                        break;
                    }
                }
                if(!ok){
                    ans[i].append("Invalid");
                    break;
                }
                else{
                    ans[i].append("Valid");
                }
            }
            else{
                ans[i].append(","+key);
                ans[i].append(","+val);
            }
        }
    }
    for(auto&i:ans)
        cout << i << endl;
}