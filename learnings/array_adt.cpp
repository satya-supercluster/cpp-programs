#include<iostream>
using namespace std;

void Insert(int a[],int &size,int capacity){
    if(size==capacity){
        cout<<"Cannot insert Because Array is full!"<<endl;
        return;
    }
    cout<<"Select an option: "<<endl<<"1. Insert at the Begining"<<endl<<"2. Insert at the End"<<endl<<"3. Insert at any Index"<<endl;
    int choice,value; 
    cin>>choice;
    int index;
    if(choice==1)       index=0;
    else if(choice==2)  index=size;
    else if(choice==3) {
        cout<<"Enter the Index of the Element: ";
        cin>>index;
        if(!(index>=0&&index<=size)){
            cout<<"OUT OF BOUND!!!"<<endl<<"Cannot Insert at given index"<<endl;
            return;
        }
    }
    else{
        cout<<"Invalid Choice"<<endl;
        return;
    }
    cout<<"Enter the Value of the Element: ";
    cin>>value;
    for(int i=size;i>index;i--){
        a[i]=a[i-1];
    }
    a[index]=value;
    size++;      
    // increamenting reference variable size also increaments value of r in main function
    return;
}

void Delete(int a[],int &size,int capacity){
    if(size==0){
        cout<<"Cannot Delete Because Array is Empty!"<<endl;
        return;
    }
    cout<<"Select an option: "<<endl<<"1. Deletion at the Begining"<<endl<<"2. Deletion at the End"<<endl<<"3. Deletion at Any Index"<<endl;
    int choice,index; 
    cin>>choice;
    if(choice==1)          index=0;
    else if(choice==2)     index=size;
    else if(choice==3)
    {
        cout<<"Enter the Index of the Element: ";
        cin>>index;
        if(!(index>=0&&index<size)){
            cout<<"OUT OF BOUND!!!"<<endl<<"Cannot Delete Element at given Index"<<endl;
            return;
        }
    }
    else{
        cout<<"Invalid Choice"<<endl;
        return;
    }
    for(int i=index;i<size;i++){
        a[i]=a[i+1];
    }
    size--;      
    // decreamenting reference variable "size" also decreaments value of r in main function
    return;
}

void Search(int a[],int size){
    int value;
    bool found = false;
    cout<<"Enter the value to search for: ";
    cin>>value;
    for(int i=0;i<size;i++){
        if(a[i]==value){
            if(found==false){
                found=true;
                cout<<"Value Found at Index: ";
            }
            cout<<i<<" ";
        }
    }
    if(found==false){
        cout<<"Search Unsuccessful";
    }
    cout<<endl;
    return;
}

int main(){
    int n;
    cout<<"Enter the capacity of the array: "; cin>>n;
    int  r;
    cout<<"Enter the size of the array: "; cin>>r;
    int a[n];
    cout<<"Enter "<<r<<" elements: "<<endl;
    for(int i=0;i<r;i++) cin>>a[i];
    int choice=0;
    while(choice!=5){
        cout<<"Select an option: "<<endl<<"1. Insert"<<endl<<"2. Delete"<<endl<<"3. Search"<<endl<<"4. Traverse"<<endl<<"5. Exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1: 
                Insert(a,r,n);
                break;
            case 2:  
                Delete(a,r,n);
                break;
            case 3:
                Search(a,r);
                break;
            case 4:
                cout<<"Traversal of the Array: ";
                for(int i=0;i<r;i++) cout<<a[i]<<" ";
                cout<<endl;
                break;
            case 5:
                cout<<"Final State of the Array: "<<endl;
                for(int i=0;i<r;i++) cout<<a[i]<<" ";   // showing final array at last
                cout<<endl;
                break;
            default: cout<<"Invalid Choice"<<endl;
        }
    }
    return 0;
}