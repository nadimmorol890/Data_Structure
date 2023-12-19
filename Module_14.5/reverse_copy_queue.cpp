#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> Q;
    queue<int> newQ;
    
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        Q.push(x);
    }
    
    stack<int> st;
    
    while(!Q.empty())
    {
        st.push(Q.front());
        Q.pop();
    }

    while(!st.empty())
    {
        newQ.push(st.top());
        st.pop();
    }

    while(!newQ.empty())
    {
        cout << newQ.front() << " ";
        newQ.pop();
    }
    cout << endl;
    
    return 0;
}