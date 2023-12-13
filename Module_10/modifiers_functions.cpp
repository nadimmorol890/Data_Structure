#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {10,20,30,40,50,60,30};
    //list<int> newlist = {100,200,300};

    //list<int> newlist;
    //newlist = mylist;
    //newlist.assign(mylist.begin(),mylist.end());

    // mylist.push_back(100);
    // mylist.push_back(200);
    // mylist.push_front(5);
    // mylist.pop_back();
    // mylist.pop_front();
    // mylist.insert(next(mylist.begin(),2),100);
    // mylist.erase(next(mylist.begin(),3));
    // mylist.insert(next(mylist.begin(),3),newlist.begin(),newlist.end());
    //mylist.erase(next(mylist.begin(),2), next(mylist.begin(),5));
    //replace(mylist.begin(),mylist.end(),30,100);

    // for(int val : mylist)
    // {
    //     cout << val << endl;
    // }
    
    auto it = find(mylist.begin(),mylist.end(),30);
    
    if(it == mylist.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    
    return 0;
}