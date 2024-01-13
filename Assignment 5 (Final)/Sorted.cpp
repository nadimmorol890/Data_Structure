#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;

        set<long long> s;

        while(n--)
        {
            long long x;
            cin >> x;
            s.insert(x);
        }

        for(auto it = s.begin(); it != s.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}