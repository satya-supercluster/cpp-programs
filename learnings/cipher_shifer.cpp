#include<iostream>
using namespace std;
int main(){
    int  t; cin>>t;
    while(t--){
        int n;
        cin>>n;
       string str,ans;
       cin>>str;
       char k=str[0];
       for(int i=1;i<n;i++){
        if(str[i]==k){
            ans.push_back(k);
            if(i!=n-1) {k=str[i+1];i++;}
       }
    }
    cout<<ans<<endl;
}
    return 0;
}