#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_head(Node * &head,int v)
{
    Node * newnode = new Node(v);
    newnode->next = head;
    head = newnode;
}
void insert_at_tail(Node * &head,int v)
{
    Node * newnode = new Node(v);
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    Node * tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void delete_from_position(Node * &head,int pos)
{
    if(head == NULL)
    {
        return;
    }
    if(pos == 0)
    {
        Node * tmp = head;
        head = head->next;
        delete tmp;
        return;
    }
    Node * tmp = head;
    for(int i=0; tmp != NULL && i<pos-1; i++)
    {
        tmp = tmp->next;
    }
    if(tmp == NULL || tmp->next == NULL)
    {
        return;
    }
    Node * deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void print_linked_list(Node * head)
{
    Node * tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{

    Node * head = NULL;
    
    int q;
    cin >> q;
    while(q--)
    {
        int x,v;
        cin >> x >> v;
        
        if(x==0)
        {
            insert_at_head(head,v);
        }
        else if(x==1)
        {
            insert_at_tail(head,v);
        }
        else if(x==2)
        {
            delete_from_position(head,v);
        }

        print_linked_list(head);
    }
    return 0;
}