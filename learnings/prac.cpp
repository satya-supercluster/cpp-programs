#include <bits/stdc++.h>
using namespace std;
bool divisible(int a,int b)
{
    return (a%b==0);
}
int main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    for(int i=0;i<n;i++)
        {
            if(divisible(a[i],k))
            {
                cout<<"YES\n";
                break;
            }
        }
	}
	return 0;
}

