#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
   int t=floor(log2(n)+1),s=__builtin_popcountll(n);
    string str;
    if(s==1){
        if(t%2==0) str="Richard";
        else str="Louise";
    }
    else {
        if(t%2==0) str="Louise";
        else str="Richard";
    }
    cout<<str;
    return 0;
}