#include<iostream>
using namespace std;
void insert(int arr[],int n,int value,int pos){
    for(int i=n-1;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(*arr);
    insert(arr,n,56,4);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}