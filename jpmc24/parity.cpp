#include<bits/stdc++.h>
using namespace std;
bool parity(char c){
    if((c-'0')%2)
        return 1;
    else
        return 0;
}
int main(){
    string s;
    cin>>s;
    for (int i = 0; i < s.length() - 1; i++)
    {
        int st = i;
        while (parity(s[i]) == parity(s[i + 1]))
        {
            i++;
        }
        if(i>st){
            sort(s.begin() + st, s.begin() + i+1);
            reverse(s.begin() + st, s.begin() + i+1);
        }
    }
    cout << s << endl;
}