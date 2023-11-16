#include <iostream>
main()
{
    int t, i, j, n, m, x;
    std::cin >> t;
    while (t-- && std::cin >> n >> m)
        for (x = 0, i = 1; i <= n; ++i)
            for (j = 1; j <= m; ++j)
                std::cout << (m % 2 ? i + (j / 2 + m / 2 * !(j % 2)) * n : ++x) << (j < m ? ' ' : '\n');
}
