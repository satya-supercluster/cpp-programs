#include<bits/stdc++.h>
using namespace std;
vector<long long> dp(100001, -1);
long long fibo(int n){
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    if(n==3)
        return 2;
    else if(dp[(int)n]==-1){
        dp[(int)n] = 0;
        for (int i = 1; i <= n - 2;i++){
            dp[(int)n] += fibo(i);
        }
    }
    return dp[(int)n];
}
int main(){
    int cases;
    cin >> cases;
    while (cases--)
    {
        int n;
        cin >> n;
        cout << fibo(n) << endl;
    }
    return 0;
}