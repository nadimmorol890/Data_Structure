#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    string val;
    Node * prev;
    Node * next;

    Node(string val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_at_tail(Node * &head, Node * &tail, string &value)
{
    Node * newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    string site;
    while(true)
    {
        cin >> site;
        if(site == "end")
        {
            break;
        }
        insert_at_tail(head, tail, site);
    }

    int q;
    cin >> q;

    Node * current = head;

    while(q--)
    {
        string command;
        cin >> command;

        if(command == "visit")
        {
            string siteToVisit;
            cin >> siteToVisit;

            Node * tmp = head;
            while(tmp != NULL)
            {
                if(tmp->val == siteToVisit)
                {
                    current = tmp;
                    cout << current->val << endl;
                    break;
                }
                tmp = tmp->next;
            }

            if(tmp == NULL)
            {
                cout << "Not Available" << endl;
            }
        }
        else if(command == "next")
        {
            if(current != NULL && current->next != NULL)
            {
                current = current->next;
                cout << current->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if(command == "prev")
        {
            if(current != NULL && current->prev != NULL)
            {
                current = current->prev;
                cout << current->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
