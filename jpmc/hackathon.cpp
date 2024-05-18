#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int h=n;
    n=min(n,m);
    m = max(h, m);
    if(k%m==0){
        cout << k / m << endl;
    }
    else{
        int c = k / m;
        int temp=k%m;
        int c3{},ok{};
        while(temp<k){
            temp += (c3 * m);
            if ((temp) % n == 0)
            {
                cout << k / m - c3 + (temp) / n << endl;
                ok = 1;
                break;
            }
            c3++;
        }
        if(!ok)
        cout << -1 << endl;
    }
}