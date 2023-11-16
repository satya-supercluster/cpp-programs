#include<stdio.h>
struct node{
    int data;
    struct node* next;
};
typedef struct node node;
void push(node** head,node** tail,int data){
    node* element=(node*)malloc(sizeof(node));
    element->data=data;
    element->next=NULL;
    if((*head)==NULL){
        (*head)=element;
    }
    else{
        (*tail)->next=element;
    }
    (*tail)=element;
}
void delete(int pos,node**head,node**tail){
    if(pos==1){
        node* temp=*head;
        if(temp->next==NULL){
            (*tail)=NULL;
        }
        (*head)=(*head)->next;
        free(temp); 
        return;   
    }
    int i=0;
    node* ptr=(*head);
    while(ptr!=NULL){
        i++;
        if(i==pos-1){
            break;
        }
        ptr=ptr->next;
    }
    if(i!=pos-1) printf("Wrong Postion\n");
    else{
       node* temp=ptr;
        if(temp->next->next==NULL){
            (*tail)=ptr;
        } 
        ptr->next=ptr->next->next;
        free(temp);
    }
}
void insert(int pos,int data,node**head,node**tail){
    if(pos==1){
        node* element = (node*) malloc(sizeof(node));
        element->next=(*head);
        (*head)=element;
        element->data=data;
    }
}
int main(){
    return 0;
}