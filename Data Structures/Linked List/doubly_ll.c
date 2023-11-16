#include<stdio.h>
typedef struct node{
    int data;
    node* next;
    node* prev;
} node;
void push(int data,node** head,node**tail){
    node* element= (node*)malloc(sizeof(node));
    element->data=data;
    element->next=NULL;
    element->prev=NULL;
    if((*head)==NULL){
        (*head)=element;
    }
    else{
        element->prev=(*tail);
        (*tail)->next=element;
    }
    (*tail)=element;
}

int main(){

}