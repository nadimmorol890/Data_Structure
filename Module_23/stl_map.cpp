#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    
    // mp.insert({"Sakib Al Hasan", 75});
    // mp.insert({"Tamim Iqbal", 28});
    // mp.insert({"Nadim Morol", 8});

    mp["Leonel Messi"] = 10;    //O(log N)
    mp["Tanvin Afrose"] = 143;
    mp["Nadim Morol"] = 8;

    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first <<" "<< it->second << endl;   //O(log N)
    }

    if (mp.count("Nadim Morol"))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}