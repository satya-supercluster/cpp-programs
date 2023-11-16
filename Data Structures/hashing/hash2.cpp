#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string, int> umap;
    umap["Satyam"]=234;
    umap["Shree"]=23;
    umap["Saturn"]=34;
    umap["Singh"]=24;
    for(auto it=umap.begin(); it!=umap.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    if(umap.find("Saturn")==umap.end()){
        cout<<"Saturn not found"<<endl;
    }
    else umap.erase("Saturn");
    cout<<"\n\n";
    umap.insert({"srk",56});
    umap.insert(make_pair("here",78));
    for(auto x:umap){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}