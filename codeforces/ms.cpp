#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n+2);
    v[0] = 360;
    v[n + 1] = 18 * 60;
    for (int i{1}; i < n + 1;i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int firstAns{-1};
    for (int i = 1; i < n + 2;i++){
        int diff = v[i] - v[i - 1];
        if(i==1){
            if(diff>=60){
                firstAns = 360;
                break;
            }
        }
        else{
            if(diff>=90){
                firstAns = v[i - 1] + 30;
                break;
            }
        }
    }
    cout << firstAns << endl;
}