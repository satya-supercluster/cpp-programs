#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7]={1,-1,3,4,-4,4,-4};
    unordered_map<int,int> umap;
    for(int i=0;i<7;i++){
        umap[arr[i]]++;
    }
    for(int i=0;i<7;i++){
        if(umap.find(arr[i])!=umap.end()&&umap.find(-arr[i])!=umap.end()){
            cout<<arr[i]<<" "<<-arr[i]<<" ";
            umap[arr[i]]--;
            umap[-arr[i]]--;
            if(umap[arr[i]]==0) umap.erase(arr[i]);
            if(umap[-arr[i]]==0) umap.erase(-arr[i]);
        }
    }
    return 0;
}