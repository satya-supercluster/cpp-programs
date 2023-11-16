#include<iostream>
using namespace std;
void toh(int n, char source, char auxiliary, char destination){
    if(n==0) return;
    toh(n-1, source, destination, auxiliary);
    cout<<"Move Disk: "<<n<<" From "<<source<<" to "<<destination<<endl;
    toh(n-1,auxiliary,source, destination);
}
int main(){
    toh(3,'A','C','B');
    return 0;
}