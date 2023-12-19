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
class myStack
{
    public:
        Node * head = NULL;
        Node * tail = NULL;
        
        int sz = 0;

        void push(int val)
        {
            sz++;
            
            Node * newNode = new Node(val);
            if(head == NULL)
            {
                head = newNode;
                tail = newNode;
                return;
            }
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
        void pop()
        {
            sz--;

            Node * deleteNode = tail;
            tail = tail->prev;
            if(tail == NULL)
            {
                head = NULL;
            }
            else
            {
                tail->next = NULL;
            }
            delete deleteNode;
        }
        int top()
        {
            return tail->val;
        }
        int size()
        {
            return sz;
        }
        bool empty()
        {
            if(sz == 0) return true;
            else return false;
        }
        // bool check_equal(myStack & stack2)
        // {
        //     if(sz != stack2.size())
        //     {
        //         return false;
        //     }
        //     Node * curr1 = head;
        //     Node * curr2 = stack2.head;

        //     while (curr1 != NULL)
        //     {
        //         if (curr1->val != curr2->val)
        //         {
        //             return false;
        //             break;
        //         }
        //         curr1 = curr1->next;
        //         curr2 = curr2->next;
        //     }
        //     return true;
        // }
        bool check_equal(Node * head1, Node * head2)
        {
            while (head1 != NULL)
            {
                if (head1->val != head2->val)
                {
                    return false;
                    break;
                }
                head1 = head1->next;
                head2 = head2->next;
            }
            return true;
        }
};
int main()
{
    int n;
    cin >> n;
    myStack st1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    
    int m;
    cin >> m;
    myStack st2;
    for(int i=0;i<m;i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }
    
    if(st1.sz != st2.sz)
    {
        cout << "NO" << endl;
    }
    else
    {
        // if (st1.check_equal(st2))
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
        if(st1.check_equal(st1.head,st2.head) == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}