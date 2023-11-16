#include<bits/stdc++.h>
using namespace std;
#define formal ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ulli unsigned long long int
#define ll long long
#define ALL(x) (x).begin(),(x).end()
#define r(i,k) for( int i=k;i>0;i--)
#define fr(i,k) for(int i=0;i<k;i++)
#define f(i,k) for(int i=1;i<=k;i++)
#define MOD 1000000007
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define pc pop_back
typedef vector<ll> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef unordered_set<ll> usi;
typedef unordered_map<ll,ll> umii;
typedef unordered_map<ll,string> umis;
typedef unordered_map<ll,char> umic;
typedef pair<ll,ll> pii;
void b_sort(int arr[],int j,int n){
    if(n==1||j>=n) return;
    if(j==n-1){
        b_sort(arr,0,n-1);
    }
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        b_sort(arr,j+1,n);
    }
    else if(j<n){
        b_sort(arr,j+1,n);
    }
}
void solve(){
    int arr[]={6,10,4,35,2};
    b_sort(arr,0,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int32_t main()
{
    formal;
    int t; t=1;
    while(t--){
        solve();
    }
    return 0;
}