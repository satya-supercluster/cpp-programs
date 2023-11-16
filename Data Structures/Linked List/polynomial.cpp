#include <iostream>
using namespace std;
struct node
{
    int coff;
    int exp;
    node *next;
};
class linked_list
{
private:
    node *head;
    node *tail;

public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }
    ~linked_list()
    {
        node *point = head;
        while (point != NULL)
        {
            node *temp = point;
            point = point->next;
            delete temp;
        }
    }
    void push(int c, int e)
    {
        if (head == NULL)
        {
            node *element = new node;
            element->coff = c;
            element->exp = e;
            element->next = NULL;
            head = element;
            tail = element;
        }
        else
        {
            node *element = new node;
            element->coff = c;
            element->exp = e;
            element->next = NULL;
            tail->next = element;
            tail = element;
        }
    }
    void traverse()
    {
        node *point = head;
        cout<<"Resultant linked list: "<<endl;
        while (point != NULL)
        {
            cout << point->coff<<" "<<point->exp <<endl;
            point = point->next;
        }
    }
    // void search(int d)
    // {
    //     node *point = head;
    //     int i = 0;
    //     bool found = 0;
    //     while (point != NULL)
    //     {
    //         i++;
    //         if (point->data == d)
    //         {
    //             cout << "Value found at position: " << i << endl;
    //             found = 1;
    //         }
    //         point = point->next;
    //     }
    //     if (!found)
    //     {
    //         cout << "Value not found in linked list!" << endl;
    //     }
    // }
    // void insert(int pos, int val)
    // {
    //     node *p = head;
    //     if (pos == 1)
    //     {
    //         node *element = new node;
    //         element->data = val;
    //         element->next = p;
    //         head = element;
    //         return;
    //     }
    //     int i = 1;
    //     while (p != NULL)
    //     {
    //         if (i == pos - 1)
    //         {
    //             break;
    //         }
    //         p = p->next;
    //         i++;
    //     }
    //     if (p == NULL)
    //     {
    //         cout << "Invalid Position" << endl;
    //         return;
    //     }
    //     node *element = new node;
    //     element->data = val;
    //     element->next = p->next;
    //     p->next = element;
    //     if (element->next == NULL)
    //     {
    //         tail = element;
    //     }
    // }
    // void remove(int pos)
    // {
    //     node *p = head;
    //     if (pos == 1)
    //     {
    //         head = head->next;
    //         delete p;
    //         return;
    //     }
    //     int i = 1;
    //     while (p != NULL)
    //     {
    //         if (i == pos - 1)
    //         {
    //             break;
    //         }
    //         p = p->next;
    //         i++;
    //     }
    //     if (p == NULL)
    //     {
    //         cout << "Invalid Position" << endl;
    //         return;
    //     }
    //     node *temp = p->next;
    //     p->next = p->next->next;
    //     delete temp;
    //     if (p->next == NULL)
    //         tail = p;
    // }
    // void reverse()
    // {
    //     tail = head;
    //     node *prev, *curr, *next;
    //     prev = NULL;
    //     curr = head;
    //     next = NULL;
    //     while (curr != NULL)
    //     {
    //         next = curr->next;
    //         curr->next = prev;
    //         prev = curr;
    //         curr = next;
    //     }
    //     head = prev;
    // }
    linked_list operator +(linked_list l){
        node* i=head;
        node* j=l.head;
        linked_list newll;
        while(i!=NULL&&j!=NULL){
            if(i->exp==j->exp){
                int coff=i->coff+j->coff;
                newll.push(coff,i->exp);
                i=i->next;
                j=j->next;
            }
            else if(i->exp>j->exp){
                newll.push(i->coff,i->exp);
                i=i->next;
            }
            else{
                newll.push(j->coff,j->exp);
                j=j->next;
            }
        }
        while(i!=NULL){
            newll.push(i->coff,i->exp);
            i=i->next;
        }
        while(j!=NULL){
            newll.push(j->coff,j->exp);
            j=j->next;
        }
        return newll;
    }
};
int main()
{
    int n,m;
    linked_list l1;
    linked_list l2;
    cout<<"Enter the no. of terms in fist polynomial: ";
    cin>>n;
    while(n--){
        int coff,exp;
        cin>>coff>>exp;
        l1.push(coff,exp);
    }
    cout<<"Enter the no. of terms in second polynomial: ";
    cin>>m;
    while(m--){
        int coff,exp;
        cin>>coff>>exp;
        l2.push(coff,exp);
    }
    linked_list l3=l1+l2;
    l3.traverse();
}