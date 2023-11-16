#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
class linked_list{
    private:
        node* head;
        node* tail;
    public:
        linked_list(){
            head = NULL;
            tail  = NULL;
        }
        ~linked_list(){
            node* point=head;
            while(point != NULL){
                node* temp=point;
                point=point->next;
                delete temp;
            }
        }
        void push(int d){
            if(head == NULL){
                node* element=new node;
                element->data = d;
                element->next = NULL;
                head=element;
                tail = element;
            }
            else{
                node* element=new node;
                element->data = d;
                element->next = NULL;
                tail->next=element;
                tail=element;
            }
        }
        void traverse(){
            node* point=head;
            while(point != NULL){
                cout<<point->data<<" ";
                point=point->next;
            }
            cout<<endl;
        }
        void reverse(){
            tail=head;
            node *prev,*curr,*next;
            prev=NULL; curr=head; next=NULL;
            while(curr!=NULL){
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
            }
            head=prev;
        }
};
int main(){
    linked_list l;
    int n;
    cout<<"Enter the size of the linked list: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++) {
        int data;
        cin>>data;
        l.push(data);
    }
    cout<<"Linked list before Reversal: "<<endl;
    l.traverse();
    l.reverse();
    cout<<"Linked list after Reversal: "<<endl;
    l.traverse();
    
}