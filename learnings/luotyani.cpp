#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s){
    int left=0,right=s.length()-1;
    while(left<right){
        if(s[left]!=s[right]) return false;
        left++; right--;
    }
    return true;
}
int main(){
    int t; cin>>t;
    while(t--){
        string str,s;
        cin>>str;
        int ans=-1;
        for(int i=str.length();i>0;i--){
            s=str.substr(0,i);
            if(!palindrome(s)) {
                ans=s.length();
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}