#include<iostream>
using namespace std;
int binary_search_least_index(int*arr,int n,int key){
    int start=0,end=n-1,mid,ans=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int main(){
    int n,key;
    cin>>n>>key;
    int a[n];
    for(auto&i:a)cin>>i;
    if(binary_search_least_index(a,n,key)==-1){
        cout<<"Not found"<<endl;
    }
    else
    cout<<"Found at least index: "<<binary_search_least_index(a,n,key);
    return 0;
}