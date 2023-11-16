#include <bits/stdc++.h>
using namespace std;
string displayScreen(string &s)
{
  string str;
  int i = 0, j = 0;
  while (s[i] != '\0')
  {
    if (s[i] == '1' || s[i] == '0')
    {
      str.push_back(s[i]);
      j++;
    }
    else if (s[i] == 'B')
    {
      if (j != 0)
      {
        str.pop_back();
        j--;
      }
    }
    i++;
  }
  return str;
}
int main()
{
  string str, s;
  cin >> str;
  s = displayScreen(str);
  cout << s;
  return 0;
}