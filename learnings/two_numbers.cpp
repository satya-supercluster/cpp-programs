#include<iostream>
using namespace std;
struct ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(){
        val=0;
        next=nullptr;
    }
    ListNode(int x){
        val=x;
        next=nullptr;
    }

};
int main(){
    int carry=0;
        ListNode* l3=nullptr;
        ListNode* back=nullptr;
        ListNode*l1=nullptr;
        ListNode*l2=nullptr;
        ListNode* ele=new ListNode(9);
        l1=ele;
        ele=new ListNode(9);
        l1->next=ele;
        ele=new ListNode(9);
        l1->next->next=ele;
        ele=new ListNode(9);
        l1->next->next->next=ele;
        ele=new ListNode(9);
        l2=ele;
        ele=new ListNode(9);
        l2->next=ele;
        while(l1!=nullptr&&l2!=nullptr){
            ListNode* ele=new ListNode((l1->val+l2->val+carry)%10);
            carry=(l1->val+l2->val+carry)/10;
            if(l3==nullptr){
                back=ele;
                l3=ele;
            }
            else{
                back->next=ele;
                back=ele;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=nullptr){
            ListNode* ele=new ListNode((l1->val+carry)%10);
            carry=(l1->val+carry)/10;
            back->next=ele;
            back=ele;
            l1=l1->next;
        }
        while(l2!=nullptr){
            ListNode* ele=new ListNode((l2->val+carry)%10);
            carry=(l2->val+carry)/10;
            back->next=ele;
            back=ele;
            l2=l2->next;
        }
        if(carry){
            ListNode* ele=new ListNode(1);
            back->next=ele;
            back=ele;
        }
        while(l3!=nullptr){
            cout<<l3->val<<" ";
            l3=l3->next;
        }
    return 0;
}
