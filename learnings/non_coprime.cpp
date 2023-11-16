#include<bits/stdc++.h>
using namespace std;
#define formal			ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ulli 			unsigned long long int
#define ll				long long int
#define ALL(x)			(x).begin(),(x).end()
#define loop0(i,k)		for(ll i=0;i<k;i++)
#define loop1(i,k)		for(ll i=1;i<=k;i++)
#define inloop(x)       for(auto it : x)
#define MOD				1000000007
#define m_p				make_pair
#define ff				first
#define ss				second
#define pb				push_back
#define pc				pop_back
#define mem(x,y)        memset(&x[0],y,x.size()*sizeof(x[0]))
#define mems(x,y)       memset(x,y,sizeof(x))


typedef vector<ll> 				vi;
typedef vector<char> 			vc;
typedef vector<string> 			vs;
typedef unordered_set<ll> 		usi;
typedef unordered_map<ll,ll> 	umii;
typedef set<ll> 				si;
typedef map<ll,ll> 				mii;
typedef pair<ll,ll>  			pii;
const   bool testcases=			true;



void solve(){
    ll l,r;
    cin>>l>>r;
    ll ansa,ansb,p=1;
    ll s=r-l+1;
    // cout<<s<<endl;
    if(s==1){
        if(l%2==0&&l!=2){
            ansa=l/2;
            ansb=l/2;
        }
        else{
            int k=-1;
            for(int i=2;i*i<=r;i++){
                if(r%i==0){
                    k=i;
                    break;
                }
            }
            if(k==-1){
                p=-1;
            }
            else {
                ansa=k;
                ansb=r-k;
            }
    }
    }
    else if(s==2){
        if(r>3){
        int e=(l%2==0)?l:r;
        ansa=2;
        ansb=e-2;
        }
        else{
            p=-1;
        }
    }
    else if(s==3){
        if(r%2){
            if(l!=1){
            ansa=2;
            ansb=l-1;
            }
            else{
                p=-1;
            }
        }
        else{
            ansa=2;
            ansb=r-2;
        }
    }
    else if(s>=4){
    ansa=2;
    if(l%2==0){
        ansb=l;
    }
    else{
        ansb=l+1;
    }
    // ll a=2,c=1;
    // while(c!=0){
    //     for(ll i=r;i>=l;i--){
    //         if((a+i>=l&&a+i<=r)&&__gcd(a,i)!=1){
    //             ansa=a;
    //             ansb=i;
    //             c=0;
    //             break;
    //         }
    //     }
    //     a++;
    // }
    }
    if(p==-1){
        cout<<"-1"<<endl;
    }
    else{
        cout<<ansa<<" "<<ansb<<endl;
    }
}



int32_t main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    formal;
    ll t=1;
    if(testcases){
        cin>>t;
    }
    while(t--){
        solve();
    }
    return 0;
}