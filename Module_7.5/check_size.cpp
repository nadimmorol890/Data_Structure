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
void insert_tail1(Node * &head1, Node * &tail1, int val1)
{
    Node * newNode = new Node(val1);
    if(head1 == NULL)
    {
        head1 = newNode;
        tail1 = newNode;
        return;
    }
    tail1->next = newNode;
    tail1 = newNode;
}
int check_size1(Node * head1)
{
    Node * tmp = head1;
    int count = 0;
    while(tmp != NULL)
    {
        tmp = tmp->next;
        count++;
    }
    return count;
}
void insert_tail2(Node * &head2, Node * &tail2, int val2)
{
    Node * newNode = new Node(val2);
    if(head2 == NULL)
    {
        head2 = newNode;
        tail2 = newNode;
        return;
    }
    tail2->next = newNode;
    tail2 = newNode;
}
int check_size2(Node * head2)
{
    Node * tmp = head2;
    int cnt = 0;
    while(tmp != NULL)
    {
        tmp = tmp->next;
        cnt++;
    }
    return cnt;
}
int main()
{
    Node * head1 = NULL;
    Node * tail1 = NULL;
    int val1;
    while(true)
    {
        cin >> val1;
        if(val1 == -1)
        break;
        insert_tail1(head1,tail1,val1);
    }
    
    int length1 = check_size1(head1);
    
    Node * head2 = NULL;
    Node * tail2 = NULL;
    int val2;
    while(true)
    {
        cin >> val2;
        if(val2 == -1)
        break;
        insert_tail2(head2,tail2,val2);
    }
    
    int length2 = check_size2(head2);
    
    if(length1 == length2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}