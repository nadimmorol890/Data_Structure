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
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    
    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        break;
        insert_at_tail(head,tail,val);
    }
    
    reverse_print(tail);
    
    return 0;
}