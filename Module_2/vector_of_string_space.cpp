#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    getchar();
    vector<string> v(n);
    for(int i=0;i<n;i++)
    {
        getline(cin,v[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}