#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int> myStack;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        myStack.push(x);
    }

    int m;
    cin >> m;
    queue<int> myQueue;
    for(int i=0;i<m;i++)
    {
        int x;
        cin >> x;
        myQueue.push(x);
    }

    int flag = 1;

    while(!myStack.empty() && !myQueue.empty())
    {
        if(myStack.top() != myQueue.front())
        {
            flag = 0;
            break;
        }
        myStack.pop();
        myQueue.pop();
    }

    if(myStack.empty() && myQueue.empty() && flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}