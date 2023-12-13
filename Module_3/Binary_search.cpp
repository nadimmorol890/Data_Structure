#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int l = 0;
    int r = n-1;
    int flag = 0;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(a[mid] == x)
        {
            flag = 1;
            break;
        }
        if(a[mid] < x)
        {
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }
        
    if(flag == 1)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    return 0;
}