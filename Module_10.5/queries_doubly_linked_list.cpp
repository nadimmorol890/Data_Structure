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
void insert_at_any_position(Node * head,int pos,int val)
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
int check_size(Node* head)
{
    int sz = 0;
    Node * tmp = head;
    while(tmp != NULL)
    {
        sz++;
        tmp = tmp->next;
    }
    return sz;
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    
    int q;
    cin >> q;
    while(q--)
    {
        int x,v;
        cin >> x >> v;
        
        if(x == 0)
        {
            insert_at_head(head,tail,v);
        }
        else if(x == check_size(head))
        {
            insert_at_tail(head,tail,v);
        }
        else if(x > check_size(head))
        {
            cout << "Invalid" << endl;
            continue;
        }
        else
        {
            insert_at_any_position(head,x,v);
        }

        normal_print(head);
        reverse_print(tail);
        
    }
    
    return 0;
}