#include <iostream>
using namespace std;
int main()
{
    int t, sum, n, c, op;
    cin >> t;
    while (t--)
    {
        sum = 0;
        op = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
    loop:
        if (sum % 2 != 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 != 0)
                {
                    c = a[i];
                    a[i] = a[i] / 2;
                    sum = sum - c + a[i];
                    op++;
                    if (sum % 2 == 0)
                        break;
                }
                if (i == (n - 1) && sum % 2 != 0)
                    goto loop;
            }
        }
        cout << op << endl;
    }
    return 0;
}