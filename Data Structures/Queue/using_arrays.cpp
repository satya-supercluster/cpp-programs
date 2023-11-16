#include<iostream>
using namespace std;

class Queue{
    private:
        int* arr;
        int capacity;
        int front;
        int rear;
    public:
    Queue(){}
    Queue(int n){
        arr= new int[n];
        capacity=n;
        front=-1;
        rear=-1;
    }
    bool isEmpty(){
        return front==-1;
    }
    bool isFull(){
        return (rear+1)%capacity==front;
    }
    int size(){
        return (capacity-front+rear+1)%capacity;
    }
    void enqueue(int data){
        if(isFull()){
            cout<<"Overflow"<<endl;;
            return;
        }
        rear=(rear+1)%capacity;
        arr[rear]=data;
        if(front==-1) 
            front=rear;
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"Underflow"<<endl;
            return;
        }
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front=(front+1)%capacity;
        }
    }
    int Front(){
        return arr[front];
    }
    void traverse(){
        int i=front;
        while(i!=rear){
            cout<<arr[i]<<" ";
            i=(i+1)%capacity;
        }
        cout<<arr[rear]<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter the Capacity of queue: ";
    cin>>n;
    Queue q(n);
    int choice=0,pos,value;
    while(choice!=6){
        cout<<"Enter the choice: "<<endl;
        cout<<"1.Enqueue\n2.Dequeue\n3.Front\n4.Traverse\n5.Size\n6.Exit\n";
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
                    cout<<q.Front()<<endl;
                    }
                    break;
            case 4:
                    q.traverse();
                    break;
            case 5:
                    cout<<"Size: "<<q.size()<<endl;
                    break;
            case 6: 
                    cout<<"Final state of the Queue: "<<endl;
                    q.traverse();
                    break;
            default:
                    cout<<"Invalid Choice!!!"<<endl;
        }
    }
    return 0;
}