#include<iostream>
using namespace std;
int main(){
    int nums[100005]={0};
    nums[0]=nums[1]=1;
    for(int i=2;i<=100005;i++){
        if(!nums[i]){
            for(int j=2*i;j<=100005;j+=i){
                nums[j]=1;
            }
        }
    }
    int n;
    cin>>n;
    if(nums[n]){
        cout<<"Not prime"<<endl;
    }
    else cout<<"Prime"<<endl;
    return 0;
}