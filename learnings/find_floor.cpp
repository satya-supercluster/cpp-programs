#include<iostream>
using namespace std;
int binary_search(int*arr,int n,float key){
    int start=0,end=n-1,mid,ans=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=arr[mid];
            return ans;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            ans=arr[mid];
            start=mid+1;
        }
    }
    return ans;
}
int main(){
    int n;float key;
    cin>>n>>key;
    int a[n];
    for(auto&i:a)cin>>i;
    if(binary_search(a,n,key)==-1){
        cout<<"Not found"<<endl;
    }
    else
    cout<<"Found value: "<<binary_search(a,n,key);
    return 0;
}