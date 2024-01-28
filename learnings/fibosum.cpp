#include <iostream>
using namespace std;
const long long s = 2;
long long mod = 1e9 + 7;
class mat
{
private:
    long long m[s][s] = {0};

public:
    void identity()
    {
        for (long long i = 0; i < s; i++)
        {
            for (long long j = 0; j < s; j++)
            {
                if (i == j)
                    m[i][j] = 1;
            }
        }
    }
    void setfibo()
    {
        m[0][0] = 1;
        m[0][1] = 1;
        m[1][0] = 1;
        m[1][1] = 0;
    }
    mat operator*(mat x)
    {
        mat ans;
        for (long long i = 0; i < s; i++)
        {
            for (long long j = 0; j < s; j++)
            {
                for (long long k = 0; k < s; k++)
                {
                    ans.m[i][j] += m[i][k] * x.m[k][j];
                }
            }
        }
        return ans;
    }
    void display()
    {
        for (long long i = 0; i < s; i++)
        {
            for (long long j = 0; j < s; j++)
            {
                cout << m[i][j] << " ";
            }
            cout << endl;
        }
    }
    long long answer()
    {
        long long ans = m[1][0] + m[1][1];
        return ans;
    }
};
mat power(mat m, long long b)
{
    mat res;
    res.identity();
    while (b)
    {
        if (b & 1)
        {
            res = res * m;
        }
        m = m * m;
        b /= 2;
    }
    return res;
}
long long fibo(long long n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    mat m;
    m.setfibo();
    m = power(m, n - 1);
    return m.answer();
}
int main()
{
    long long k;
    cin >> k;
    while (k--)
    {
        // long long n, m, ans = 0;
        // cin >> n >> m;
        // for (long long i = n; i <= m; i++)
        // {
        //     ans = (ans + fibo(i)) % mod;
        // }
        // cout << ans<<endl;
        long long n;
        cin>>n;
        cout<<fibo(n);
    }
    return 0;
}