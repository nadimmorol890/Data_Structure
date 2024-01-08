#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* input_tree()
{
    int val;
    cin >> val;
    
    Node * root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty())
    {
        Node * p = q.front();
        q.pop();
        
        int l,r;
        cin >> l >> r;
        Node * myleft;
        Node * myright;
        
        if(l == -1) 
            myleft = NULL;
        else 
            myleft = new Node(l);
        
        if(r == -1)
            myright = NULL;
        else
            myright = new Node(r);

        p->left = myleft;
        p->right = myright;
        
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}
void print_level_order(Node * root)
{
    if(root == NULL) return;
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty())
    {
        Node * f = q.front();
        q.pop();
        
        cout << f->val << " ";

        if(f->left != NULL) q.push(f->left);
        if(f->right != NULL) q.push(f->right);
    }
}
void insert(Node * &root, int x)
{
    if(root == NULL)
    {
        root = new Node(x);
    }

    if(x < root->val)
    {
        if(root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert(root->left, x);
        }
    }
    else
    {
        if(root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert(root->right, x);
        }
    }
}
int main()
{
    
    int x;
    cin >> x;
    
    Node * root = input_tree();

    insert(root, x);
    print_level_order(root);

    return 0;
}