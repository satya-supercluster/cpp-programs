#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 9);
    int x, p = -1;
    cin >> x;
    int start = 0, end = 9, mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == x)
        {
            p = 1;
            break;
        }
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    if (p == -1)
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }
    system("pause");
    return 0;
}
