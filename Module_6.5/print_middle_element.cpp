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
void print_middle_element(Node * head,int v)
{
    cout << endl;
    cout <<"Middle Element is : ";
    int mid = (v/2);
    Node * tmp = head;
    for(int i=1;i<=mid-1;i++)
    {
        tmp = tmp->next;
    }
    if(mid%2==0)
    {
        tmp = tmp->next;
        cout << tmp->val << endl;
    }
    else
    {
        cout << tmp->val <<" "<<tmp->next->val<< endl;
    }
    
}
int main()
{
    int val;
    Node * head = NULL;
    int count = 0;
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head,val);
        count++;
    }
    print_middle_element(head,count);
    return 0;
}