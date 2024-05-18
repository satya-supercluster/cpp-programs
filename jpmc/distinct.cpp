#include<bits/stdc++.h>
using namespace std;
vector<int> v(1000006, 0);
bool is(int num){
    set<int> s;
    int c{};
    while(num){
        s.insert(num % 10);
        num /= 10;
        c++;
    }
    if(s.size()==c)
        return true;
    else
        return false;
}
void pre(){
    v[1] = 1;
    for (int i = 2; i < 1e6 + 2;i++){
        if(is(i))
            v[i] = v[i - 1] + 1;
        else
            v[i] = v[i - 1];
    }
}
int main(){
    pre();
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout << v[r] - v[l - 1] << endl;
    }
    return 0;
}