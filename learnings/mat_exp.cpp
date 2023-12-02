#include<iostream>
using namespace std;
const int s=2;
class mat{
    private:
        int m[s][s]={0};
    public:
        void identity(){
            for(int i=0;i<s;i++){
                for(int j=0;j<s;j++){
                    if(i==j) m[i][j]=1;
                }
            }
        }
        void setfibo(){
            m[0][0]=1;
            m[0][1]=1;
            m[1][0]=1;
            m[1][1]=0;
        }
        mat operator*(mat x){
            mat ans;
            for(int i=0;i<s;i++){
                for(int j=0;j<s;j++){
                    for(int k=0;k<s;k++){
                        ans.m[i][j]+=m[i][k]*x.m[k][j];
                    }
                }
            }
            return ans;
        }
        void display(){
            for(int i=0;i<s;i++){
                for(int j=0;j<s;j++){
                    cout<<m[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        int answer(){
            int ans=m[1][0]+m[1][1];
            return ans;
        }
};
mat power(mat m,int b){
    mat res;
    res.identity();
    while(b){
        if(b&1){
            res=res*m;
        }
        m=m*m;
        b/=2;
    }
    return res;
}
int fibo(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    mat m;
    m.setfibo();
    m=power(m,n-1);
    return m.answer();
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<fibo((i>2)?i-1:i)<<" ";
    }
    return 0;
}