#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int> umap;
    int arr[]={1,2,3,4,5,6,7,1,2,3,5,8,9,7,8,5,6};
    for(int i=0; i<(sizeof(arr)/sizeof(arr[0]));i++){
        umap[arr[i]]++;
    }
     for(int i=0; i<(sizeof(arr)/sizeof(arr[0]));i++){
        auto it=umap.find(arr[i]);
        if(it->second==1){
            cout<<it->first;
            break;
        }
    }
    return 0;
}