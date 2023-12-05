#include<iostream>
using namespace std;
int binary_search(int*arr,int key){
    int low=0,high=1,mid;
    while(arr[high]<=key){
        low=high;
        high=2*high;
    }
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int n,key;
    cin>>n>>key;
    int a[n];
    for(auto&i:a)cin>>i;
    if(binary_search(a,key)==-1){
        cout<<"Not found"<<endl;
    }
    else
    cout<<"Found at index: "<<binary_search(a,key);
    return 0;
}