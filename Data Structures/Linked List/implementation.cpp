#include <bits/stdc++.h>
using namespace std;
#define formal                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ulli unsigned long long int
#define ll long long int
#define ALL(x) (x).begin(), (x).end()
#define loop0(i, k) for (ll i = 0; i < k; i++)
#define loop1(i, k) for (ll i = 1; i <= k; i++)
#define inloop(x) for (auto it : x)
#define MOD 1000000007
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define pc pop_back
#define mem(x, y) memset(&x[0], y, x.size() * sizeof(x[0]))
#define mems(x, y) memset(x, y, sizeof(x))

typedef vector<ll> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef unordered_set<ll> usi;
typedef unordered_map<ll, ll> umii;
typedef pair<ll, ll> pii;
const bool testcases = 0;

struct node{
    ll data;
    node* next;
};
class linkedlist{
    node* head;
    node* tail;
    public:
        linkedlist(){
            head=NULL;
            tail=NULL;
        }
        void push(ll data){
            if(head==NULL){
                node* element=new node;
                element->data=data;
                element->next=NULL;
                head=element;
                tail=element;
            }
            else{
                node* element=new node;
                element->data=data;
                element->next=NULL;
                tail->next=element;
                tail=element;
            }
        }
        void traverse(){
            node* p=head;
            while(p!=NULL){
                cout<<p->data<<" ";
                p=p->next;
            }
        }
        void insert(ll pos,ll data){
            node* element=new node;
            int i=1;
            node* p=head;
            while(p!=NULL){
                if(i==pos-1){
                    break;
                }
                p=p->next;
                i++;
            }
            
        }
};


void solve()
{
    linkedlist lt;
    loop0(i,6){
        int x;
        cin>>x;
        lt.push(x);
    }
    lt.traverse();
}

int32_t main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    // formal;
    ll t = 1;
    if (testcases)
    {
        cin >> t;
    }
    while (t--)
    {
        solve();
    }
    return 0;
}