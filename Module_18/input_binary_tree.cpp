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
        //1. Ber kore ana
        Node * p = q.front();
        q.pop();
        
        //2. Jabotiyo ja kaj ache
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
        
        //3. children goloke line e rakha
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}
void print_level_order(Node * root)
{
    if(root == NULL)
    {
        cout << "Root Nai" << endl;
        return;
    }
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty())
    {
        //1. Ber kore ana
        Node * f = q.front();
        q.pop();
        
        //2. Jabotiyo ja kaj ache
        cout << f->val << " ";

        //3. children goloke line e rakha
        if(f->left != NULL) q.push(f->left);
        if(f->right != NULL) q.push(f->right);
    }
}
int main()
{
    Node * root = input_tree();
    print_level_order(root);
    
    return 0;
}