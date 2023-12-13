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
void insert_at_head(Node * &head,int v)
{
    Node * newnode = new Node(v);
    newnode->next = head;
    head = newnode;
}
void insert_at_position(Node * head,int pos,int v)
{
    Node * newnode = new Node(v);
    Node * tmp = head;
    for(int i=1;i<pos-1;i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}
int check_size(Node * head)
{
    int cnt = 0;
    Node * tmp = head;
    while(tmp != NULL)
    {
        tmp = tmp->next;
        cnt++;
    }
    return cnt;
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
    int val;
    Node * head = NULL;
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head,val);
    }
    
    int q;
    cin >> q;
    while(q--)
    {
        int length = check_size(head);
        int index,val;
        cin >> index >> val;
        if(index==length)
        {
            insert_at_tail(head,val);
            print_linked_list(head);
        }
        else if(index > length)
        {
            cout << "Invalid" << endl;
        }
        else if(index == 0)
        {
            insert_at_head(head,val);
            print_linked_list(head);
        }
        else
        {
            insert_at_position(head,index,val);
            print_linked_list(head);
        }  
    }
    return 0;
}