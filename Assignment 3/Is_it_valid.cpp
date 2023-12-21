#include<bits/stdc++.h>
using namespace std;
bool check_valid(string s)
{
    stack<char> st;
    
    for(char c:s)
    {
        if (!st.empty() && ((c == '0' && st.top() == '1') || (c == '1' && st.top() == '0')))
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }
    return st.empty();
}
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        if(check_valid(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}