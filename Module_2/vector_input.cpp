#include<bits/stdc++.h>
using namespace std;
int main()
{
    //First Type
    
    // vector<int> v;
    // int n;
    // cin >> n;
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    // for(int y:v)
    // {
    //     cout << y <<" ";
    // }

    //Second Type

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    for(int y:v)
    {
        cout << y <<" ";
    }
    return 0;
}