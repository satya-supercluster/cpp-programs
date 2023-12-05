#include<iostream>
using namespace std;
char binary_search(string arr,int n,char key){
    int start=0,end=n-1,mid;
    char ans='#';
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            ans=arr[mid];
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int main(){
    int n;char key;
    cin>>n>>key;
    string a;
    cin>>a;
    if(binary_search(a,n,key)=='#'){
        cout<<"Not found"<<endl;
    }
    else
    cout<<"Found char: "<<binary_search(a,n,key);
    return 0;
}