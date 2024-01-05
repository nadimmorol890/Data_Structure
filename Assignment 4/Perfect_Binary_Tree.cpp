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
int maxDepth(Node * root)
{
    if(!root) return 0;

    int l = maxDepth(root->left);
    int r = maxDepth(root->right);

    return max(l, r) + 1;
}
int count_node(Node * root)
{
    if(!root) return 0;

    queue<Node*> q;
    q.push(root);

    int nodeCount = 0;

    while(!q.empty())
    {
        Node * f = q.front();
        q.pop();
        
        nodeCount++;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }

    return nodeCount;
}
int main()
{
    Node * root = input_tree();

    int node = count_node(root);
    int depth = maxDepth(root);

    int total_node = pow(2,depth) - 1; 

    if(node == total_node)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}