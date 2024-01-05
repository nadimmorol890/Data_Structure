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
void print_level_node(Node * root, int x)
{
    if(root == NULL) return;
    
    queue<pair<Node*, int>> q;
    q.push({root, 0});

    int maxLevel = 0;

    while(!q.empty())
    {
        Node * node = q.front().first;
        int level = q.front().second;
        q.pop();
        
        if(level == x)
        cout << node->val << " ";

        maxLevel = max(level, maxLevel);

        if(node->left) q.push({node->left, level+1});
        if(node->right) q.push({node->right, level+1});
    }
    if(x > maxLevel)
    {
        cout << "Invalid" << endl;
    }
}
int main()
{
    Node * root = input_tree();

    int x;
    cin >> x;

    print_level_node(root,x);

    return 0;
}