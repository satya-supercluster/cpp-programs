#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int z, p = 0,m=1;
        cin >> z;
        vector<int> a(z);

        for (int i = 0; i < z; i++)
        {
            cin >> a[i];
        }
        while (m <= 1000000000)
        {
            m = m * 2;  // find lower bound power of 2
        }

        m = m - 1;

        int n = m, c = m;
        for (int i = 0; i < z; i++)
        {
            n = n & a[i];
        }

        for (int i = 0; i < z; i++)
        {
            c = c & a[i];
            if (c == 0)
            {
                p++;
                c = m;
            }
        }

        if(n>0){
            p++;
        }
        cout << p << endl;
    }

    return 0;
}
