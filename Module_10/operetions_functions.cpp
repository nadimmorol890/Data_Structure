#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {10,20,30,10,40,10,50};
    
    //mylist.remove(10);
    //mylist.sort();    //ascending
    //mylist.sort(greater<int>());  //descending
    //mylist.unique();
    mylist.reverse();

    for(int val : mylist)
    {
        cout << val << endl;
    }
    return 0;
}