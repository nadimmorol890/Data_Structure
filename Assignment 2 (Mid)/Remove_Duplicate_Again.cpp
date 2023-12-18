#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist;
    
    int v;
    while(true)
    {
        cin >> v;
        if(v == -1)
        break;
        mylist.push_back(v);
    }
    
    mylist.sort();
    mylist.unique();
    
    for(int val : mylist)
    {
        cout << val << " ";
    }
    
    return 0;
}