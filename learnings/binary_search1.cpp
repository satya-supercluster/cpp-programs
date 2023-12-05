#include<iostream>
using namespace std;
int binary_search(int*arr,int n,int key){
    int start=0,end=n-1,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
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