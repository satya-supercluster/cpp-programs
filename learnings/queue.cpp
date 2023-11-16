#include<iostream>
using namespace std;
struct queue{
    int front=-1;
    int rear=-1;
    int capacity;
    int * arr;
};
queue* createQueue(int size){
    queue* q=new queue;
    q->arr=new int[size];
    q->capacity=size;
    return q;
}
void push(queue* q,int data){
    if((q->rear+1)%q->capacity==q->front){
        cout<<"Queue is full"<<endl;
    }
    else{
        if(q->front==-1)q->front++;
        q->rear=(q->rear+1)%q->capacity;
        q->arr[q->rear]=data;
    }
}

void pop(queue* q){
    if(q->front==-1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        if(q->front==q->rear) q->front=q->rear=-1;
        else q->front=(q->front+1)%q->capacity;
    }
}
void front(queue* q){
    if(q->front==-1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<q->arr[q->front]<<endl;
    }
}
int main(){
    queue* q;
    int n;
    cout<<"Enter the Capacity of queue: ";
    cin>>n;
    q=createQueue(100);
    int choice=0,pos,value;
    while(choice!=6){
        cout<<"Enter the choice: "<<endl;
        cout<<"1.Enqueue\n2.Dequeue\n3.Front\n4.Traverse\n5.Size\n6.Exit\n";
        cin>>choice;
        switch(choice){
            case 1:
                    cout<<"Enter the Value to Insert: ";
                    cin>>value;
                    push(q,value);
                    break;
            case 2:
                    pop(q);
                    break;
            case 3:
                    cout<<"Front Element: ";
                    front(q);
                    break;
            case 4:
                    // q.traverse();
                    break;
            case 5:
                    // cout<<"Size: "<<q.size()<<endl;
                    break;
            case 6: 
                    // cout<<"Final state of the Queue: "<<endl;
                    // q.traverse();
                    break;
            default:
                    cout<<"Invalid Choice!!!"<<endl;
        }
    }
}