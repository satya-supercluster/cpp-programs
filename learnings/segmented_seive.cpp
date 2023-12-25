#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int nums[(int)sqrt(m)+1]={0};
    nums[0]=nums[1]=1;
    for(int i=2;i*i<=m;i++){
        if(!nums[i]){
            for(int j=2*i;j*j<=m;j++){
                nums[j]=1;
            }
        }
    }
    vector<int> v;
    for(int i=0;i*i<=m;i++){
        if(!nums[i])
            v.push_back(i);
    }
    int ans[m-n+1]={0};
    for(auto i:v){
        for(int j=0;j<m-n+1;j++){
            if((n+j)%i==0){
                if((n+j)!=i)
                    ans[j]=1;
            }
        }
    }
    for(int i=0;i<m-n+1;i++){
        if(ans[i]==0){
            cout<<i+n<<" ";
        }
    }
    return 0;
}