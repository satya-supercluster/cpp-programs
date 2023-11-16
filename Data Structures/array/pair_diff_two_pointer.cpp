#include<iostream>
#include<map>
#include<algorithm>
#include<set>
using namespace std;
int MAX=100000;
int count_pair(int arr[], int n, int d)
{
    int c=0;
    map<int,bool> m;
    for(int i=0; i<=MAX; i++){
        m[i]=false;
    }
    for(int i=0; i<n; i++){
        m[arr[i]]=true;
    }
    for(int i=0; i<n; i++){
        if(m[arr[i]-d]==true){
            c++;
        }
        if(m[arr[i]+d]==true){
            c++;
        }
        m[arr[i]]=false;
    }
    return c;
}
int main(){
    int arr[]={ 1,2,3};
    int n=sizeof(arr)/sizeof(*arr);
    cout<<n<<endl;
    sort(arr,arr+n);
    int k; cin>>k;
    int c=count_pair(arr,n,k);
    cout<<c<<endl;
    return 0;
}