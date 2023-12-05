#include<iostream>
using namespace std;
int binary_search(int*arr,int n,int key){
    int start=0,end=n-1,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key) return mid;
        if((mid+1<n)&&arr[mid+1]==key) return mid+1;
        if((mid-1>0)&&arr[mid-1]==key) return mid-1;
        else if(arr[mid]>key){
            end=mid-2;
        }
        else{
            start=mid+2;
        }
    }
    return -1;
}
int main(){
    int n,key;
    cin>>n>>key;
    int a[n];
    for(auto&i:a)cin>>i;
    if(binary_search(a,n,key)==-1){
        cout<<"Not found"<<endl;
    }
    else
    cout<<"Found at index: "<<binary_search(a,n,key);
    return 0;
}