#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> uset;
    int count=0;
    int arr[]={1,2,3,4,5,6,7,1,2,3,5,8,9,7,8,5,6};
    int brr[]={1,2,3,4,5,6,7};
    for(int i=0; i<(sizeof(arr)/sizeof(arr[0]));i++){
        uset.insert(arr[i]);
    }
    for(int i=0; i<(sizeof(brr)/sizeof(brr[0]));i++){
        if(uset.find(arr[i])!=uset.end()){
            count++;
            uset.erase(arr[i]);        //was counting duplicate elements
        }
    }
    cout<<"count: "<<count<<endl;
    return 0;
}