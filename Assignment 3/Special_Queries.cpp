#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    
    queue<string> qu;
    
    while(q--)
    {
        int x;
        cin >> x;
        if(x == 0)
        {
            string name;
            cin >> name;
            qu.push(name);
        }
        else if(x == 1)
        {
            if(!qu.empty())
            {
                cout << qu.front() << endl;
                qu.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }
    return 0;
}