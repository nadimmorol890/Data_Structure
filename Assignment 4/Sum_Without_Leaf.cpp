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
long long sum_without_leaf(Node * root)
{
    if(root == NULL) return 0;
    
    long long sum = 0;

    if(root->left == NULL && root->right == NULL) return 0;

    sum += (sum_without_leaf(root->left) + sum_without_leaf(root->right));
    
    return (sum + root->val);
}
int main()
{
    Node * root = input_tree();

    long long ans = sum_without_leaf(root);
    cout << ans << endl;

    return 0;
}