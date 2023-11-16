#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

class Queue{
    private:
        node* head;
        node* tail;
    public:
        Queue(){
            head = NULL;
            tail = NULL;
        }
        void enqueue(int data){
            node* element = new node;
            element->data = data;
            element->next=NULL;
            if(head == NULL){
                head = element;
            }
            else{
                tail->next=element;
            }
            tail=element;
        }
        void dequeue(){
            if(head==NULL){
                cout<<"UnderFlow!"<<endl;
                return;
            }
            node* temp=head;
            head=head->next;
            delete temp;
        }
        void traverse(){
            node* p=head;
            while(p!=NULL){
                cout<<p->data<<" ";
                p=p->next;
            }
            cout<<endl;
        }
        bool isEmpty(){
            return head==NULL;
        }
        int front(){
            return head->data;
        }
};

int main(){
    Queue q;
    int n;
    cout<<"Enter the initial size of the Queue: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++) {
        int data;
        cin>>data;
        q.enqueue(data);
    }
    int choice=0,pos,value;
    while(choice!=5){
        cout<<"Enter the choice: "<<endl;
        cout<<"1.Enqueue\n2.Dequeue\n3.Front\n4.Traverse\n5.Exit\n";
        cin>>choice;
        switch(choice){
            case 1:
                    cout<<"Enter the Value to Insert: ";
                    cin>>value;
                    q.enqueue(value);
                    break;
            case 2:
                    q.dequeue();
                    break;
            case 3:
                    if(q.isEmpty()){
                        cout<<"Underflow"<<endl;
                    }
                    else{
                    cout<<"Front Element: ";
                    cout<<q.front()<<endl;
                    }
                    break;
            case 4:
                    q.traverse();
                    break;
            case 5: 
                    cout<<"Final state of the Queue: "<<endl;
                    q.traverse();
                    break;
            default:
                    cout<<"Invalid Choice!!!"<<endl;
        }
    }
    return 0;
}