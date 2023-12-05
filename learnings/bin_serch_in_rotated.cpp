#include<iostream>
using namespace std;
int min_ind(int*arr,int n){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if((arr[mid]<=arr[(mid+1)%n])&&(arr[mid]<=arr[(mid-1+n)%n])){
            return mid;
        }
        if(arr[low]<=arr[mid]){
            low=mid+1;
        }
        else if(arr[high]>=arr[mid]){
            high=mid-1;
        }
    }
    return -1;
}
int search(int*arr,int n,int key){
    int mn=min_ind(arr,n);
    int start,end,mid;
    if(arr[n-1]<key){
        start=0;end=mn-1;
    }
    else{
        start=mn;end=n-1;
    }
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
    if(search(a,n,key)==-1){
        cout<<"Not found"<<endl;
    }
    else
    cout<<"Found at index: "<<search(a,n,key);
    return 0;
}