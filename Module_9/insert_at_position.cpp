#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void normal_print(Node * head)
{
    Node * tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
    }
    cout << endl;
}
void reverse_print(Node * tail)
{
    Node * tmp = tail;
    while(tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->prev;
    }
    cout << endl;
}
void insert_at_position(Node * head,int pos,int val)
{
    Node * newNode = new Node(val);
    Node * tmp = head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->prev = tmp;
    newNode->next->prev = newNode;
}
void insert_at_head(Node * &head,Node * &tail,int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_at_tail(Node * &head,Node * &tail, int val)
{
    Node * newNode = new Node(val);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int size(Node * head)
{
    Node * tmp = head;
    int count = 0;
    while(tmp != NULL)
    {
        tmp = tmp->next;
        count++;
    }
    return count;
}
int main()
{
    // Node * head = NULL;
    // Node * tail = NULL;
    
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    int pos,val;
    cin >> pos >> val;
    
    if(pos > size(head))
    {
        cout << "Invalid" << endl;
    }
    else if(pos == 0)
    {
        insert_at_head(head,tail,val);
    }
    else if(pos == size(head))
    {
        insert_at_tail(head,tail,val);
    }
    else
    {
        insert_at_position(head,pos,val);
    }
    
    normal_print(head);
    reverse_print(tail);
    
    return 0;
}