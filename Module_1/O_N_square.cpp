#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for(int i=1;i<=n;i++)   //O(N*N)
    // {
    //     for(int i=1;i<=n;i++)
    //     {
    //         cout << "Hello" << endl;
    //     }
    // }
    for(int i=0;i<=n-1;i++) //O(N*N)
    {
        for(int j=i+1;j<n;j++)
        {
            cout << "Hi" << endl;
        }
    }
    return 0;
}