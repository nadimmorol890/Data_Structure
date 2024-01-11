#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;

    int n;
    cin >> n;

    while(n--)
    {
        int x;
        cin >> x;
        s.insert(x);    //O(log N)
    }

    // asscending sort + remove duplicate
    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }
    // searching
    cout << s.count(100) << endl;   //O(log N)
    
    if(s.count(100))
        cout << "found" << endl;
    else
        cout << "not found" << endl;

    return 0;
}