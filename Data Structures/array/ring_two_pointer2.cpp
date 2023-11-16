#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
bool isRing(node* head){
    node* h; node* t;
    h=head; t=head;
    while(h!=NULL){
        h=h->next;
        if(h==NULL) return false;
        h=h->next;
        t=t->next;
        if(t==h) return true;
    }
    return false;
}
int main(){
    node a,b,c,d,e,f,g;
    node* head=&a;
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=&e;
    e.next=&f;
    f.next=&g;
    g.next=&c;
    for(int i=0; i<7; i++){
        int k; cin>>k;
        head->data=k;
        head=head->next;
    }
    head=&a;
    if(isRing(head)){
        cout<<"Ring Found!"<<endl;
    }
    else{
        cout<<"Ring Not Found!"<<endl;
    }
    return 0;
}