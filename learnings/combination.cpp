#include<iostream>
using namespace std;
int fact(int x){
    if(x==0||x==1) return 1;
    else return x*fact(x-1);
}
int combination(int n,int r){
    int p;
    p=fact(n)/(fact(n-r)*fact(r));
    return p;
}
int main(){
    cout<<fact(5)<<endl<<combination(5,2);
}
