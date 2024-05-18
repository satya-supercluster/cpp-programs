#include<bits/stdc++.h>
using namespace std;
void solve(string s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (st.empty())
            st.push(s[i]);

        else
        {
            if (s[i] == 'B')
                st.pop();

            else
                st.push(s[i]);
        }
    }
    string ans = "";
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    cout << ans << endl;
}
int main(){
    string s;
    cin >> s;
    solve(s);
}