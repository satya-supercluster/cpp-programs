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
int binary_search_largest_index(int*arr,int n,int key){
    int start=0,end=n-1,mid,ans=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
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
    else{
        int low=binary_search_least_index(a,n,key);
        int high=binary_search_largest_index(a,n,key);
        cout<<"count: "<<high-low+1;

    }
    return 0;
}