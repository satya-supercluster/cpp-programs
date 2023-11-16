// Abhi is a salesman. He was given two types of candies, which he is selling in NN different cities.

// For the prices of the candies to be valid, Abhi's boss laid down the following condition:

// A given type of candy must have distinct prices in all N cities.
// In his excitement, Abhi wrote down the prices of both the candies on the same page and in random order instead of writing them on different pages. Now he is asking for your help to find out if the prices he wrote are valid or not.

// More formally, you are given an array A of size 2N. Find out whether it is possible to split A into two arrays, each of length N, such that both arrays consist of distinct elements.
#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t, count, p, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int a[2 * n];
		for (int i = 0; i < 2 * n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < 2 * n; i++)
		{
			p = 1;
			count = 1;
			for (int j = i + 1; j < 2 * n; j++)
			{
				if (a[i] == a[j])
				{
					count++;
				}
			}
			if (count > 2)
			{
				p = 0;
				break;
			}
		}
		if (p == 0)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}
