#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    
    stack<int> s;
    
    for(int i=0;i<n;i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }
    
    queue<int> q;
    
    for(int i=0;i<m;i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    while(!s.empty() && !q.empty())
    {
        if(s.top() != q.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        s.pop();
        q.pop();
    }

    if(s.empty() && q.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}