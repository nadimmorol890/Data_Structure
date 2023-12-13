#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    long long int flag = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == a[i-1])
        {
            flag = 1;
        }
    }
    if(flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
