#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist;

    int q;
    cin >> q;
    while(q--)
    {
        int x,v;
        cin >> x >> v;

        int size = mylist.size();

        if(x == 0)
        {
            mylist.push_front(v);
        }
        else if(x == 1)
        {
            mylist.push_back(v);
        }
        else if(x == 2)
        {
            if(v < size)
            {
                auto it = next(mylist.begin(), v);
                if (it != mylist.end())
                {
                    mylist.erase(it);
                }
            }
        }

        cout << "L -> ";
        for(int val : mylist)
        {
            cout << val << " ";
        }
        cout << endl;
        
        cout << "R -> ";
        for (auto it = mylist.rbegin(); it != mylist.rend(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}