#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,1,5,3,2,8,6,5,3,1,4,3,5,4,2,6,4,2,1,1,6,7,9,0,8,6,4,3,2,2,1};
    int cur_sum=0,p=0;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        cur_sum=0;
        for(int j=i;j<(sizeof(arr)/sizeof(arr[0]));j++){
            cur_sum+=arr[j];
        }
            if(cur_sum==0){
                p=1;
                break;
            }
    }
    if(p){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}