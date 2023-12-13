#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Replace
    
    // vector<int> v = {1,2,2,3,4,5,2,7,8,3,2};
    // replace(v.begin(),v.end(),2,10);
    // for(int x:v)
    // {
    //     cout << x <<" ";
    // }

    //Find

    vector<int> v = {1,2,3,4,5,6,7};
    auto it = find(v.begin(),v.end(),2);
    //cout << *it;
    if(it == v.end()) cout <<"Not Found";
    else cout <<"Found";
    return 0;
}