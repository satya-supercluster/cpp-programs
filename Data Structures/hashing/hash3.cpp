#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int> umap;
    int arr[]={1,2,3,4,5,6,7,1,5,3,2,8,6,5,3,1,4,3,5,4,2,6,4,2,1,1,6,7,9,0,8,6,4,3,2,2,1};
    int key;
    for(int i=0; i<(sizeof(arr)/sizeof(arr[0]));i++){
        key=arr[i];
        umap[key]++;
    }
    for(auto it=umap.begin();it!=umap.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}