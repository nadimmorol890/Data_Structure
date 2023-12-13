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
void insert_tail(Node * &head, Node * &tail, int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_middle_element(Node * head, int len)
{
    Node * tmp = head;
    int mid = len/2;
    for(int i=1; i<mid; i++)
    {
        tmp = tmp->next;
    }
    if(len%2 == 1)
    {
        tmp = tmp->next;
        cout << tmp->val << endl;
    }
    else
    {
        cout << tmp->val <<" "<< tmp->next->val << endl;
    }
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
    Node * head = NULL;
    Node * tail = NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val == -1) 
        break;
        insert_tail(head,tail,val);
    }
    int length = size(head);
    
    print_middle_element(head,length);
    
    return 0;
}