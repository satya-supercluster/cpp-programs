#include<iostream>
#include<algorithm>
using namespace std;
int count_pair(int arr[],int n,int sum){
    int cnt=0;
    int high=n-1;
    int low=0;
    while(high>low){
        if(arr[low]+arr[high]==sum){
            cnt++;
            high--;
            low++;
        }
        else if(arr[high]+arr[low]<sum){
            low++;
        }
        else if(arr[high]+arr[low]>sum){
            high--;
        }
    }
        return cnt;
}
int main(){
    int arr[]={ 1,2,3,4,5,6,7,8,9,10,11};
    int n=sizeof(arr)/sizeof(*arr);
    cout<<n<<endl;
    sort(arr,arr+n);
    int k; cin>>k;
    int c=count_pair(arr,n,k);
    cout<<c<<endl;
    return 0;
}