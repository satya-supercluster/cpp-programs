#include<iostream>
using namespace std;
void subsequence(string str,int ind, string ans){
    if(ind==str.length()){
        cout<<ans<<endl;
        return;
    } 
    ans+=str[ind];
    subsequence(str,ind+1,ans);
    ans.pop_back();
    subsequence(str,ind+1,ans);
    return;
}
int main(){
    string str,ans="";
    cin >> str;
    subsequence(str,0,ans);
    return 0;
}