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
        void search(int d){
            node* point=head;
            int i=0;
            bool  found=0;
            while(point != NULL){
                i++;
                if(point->data==d){
                    cout<<"Value found at position: "<<i<<endl;
                    found=1;
                }
                point=point->next;
            }
            if(!found){
                cout<<"Value not found in linked list!"<<endl;
            }
        }
        void insert(int pos,int val){
            node* p=head;
            if(pos==1){
                node* element=new node;
                element->data=val;
                element->next=p;
                head=element;
                return;
            }
            int i=1;
            while(p!=NULL){
                if(i==pos-1){
                    break;
                }
                p=p->next;
                i++;
            }
            if(p==NULL){
                cout<<"Invalid Position"<<endl;
                return;
            }
            node* element=new node;
            element->data=val;
            element->next=p->next;
            p->next=element;
            if(element->next==NULL){
                tail=element;
            }
        }
        void remove(int pos){
            node* p=head;
            if(pos==1){
                head=head->next;
                delete p;
                return;
            }
            int i=1;
            while(p!=NULL){
                if(i==pos-1){
                    break;
                }
                p=p->next;
                i++;
            }
            if(p==NULL){
                cout<<"Invalid Position"<<endl;
                return;
            }
            node* temp=p->next;
            p->next=p->next->next;
            delete temp;
            if(p->next==NULL)
                tail=p;
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
    int choice=0,pos,value;
    while(choice!=6){
        cout<<"Enter the choice: "<<endl;
        cout<<"1.Insert\n2.Delete\n3.Search\n4.Traverse\n5.Reverse\n6.Exit\n";
        cin>>choice;
        switch(choice){
            case 1:
                    cout<<"Enter the Position(1 based) and Value to Insert: ";
                    cin>>pos>>value;
                    l.insert(pos,value);
                    break;
            case 2:
                    cout<<"Enter the Position(1 based) to Delete: ";
                    cin>>pos;
                    l.remove(pos);
                    break;
            case 3:
                    cout<<"Enter the Value to search: ";
                    cin>>value;
                    l.search(value);
                    break;
            case 4:
                    l.traverse();
                    break;
            case 5:
                    l.reverse();
                    break;
            case 6: 
                    cout<<"Final state of Linked List: "<<endl;
                    l.traverse();
                    break;
            default:
                    cout<<"Invalid Choice!!!"<<endl;
        }
    }
}