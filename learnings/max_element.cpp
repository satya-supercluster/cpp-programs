#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5]={0,1,5,3,4};
    auto it=max_element(a,a+5);
    cout<<(it-a)<<endl;
    cout<<it<<endl;
}