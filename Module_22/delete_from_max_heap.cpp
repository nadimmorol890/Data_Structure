#include<bits/stdc++.h>
using namespace std;

void insert(vector<int> &v, int x)
{
    v.push_back(x);
        
    int cur_indx = v.size()-1;
        
    while(cur_indx != 0)
    {
        int parent_indx = (cur_indx-1)/2;
            
        if(v[parent_indx] < v[cur_indx])
        {
            swap(v[parent_indx], v[cur_indx]);
            cur_indx = parent_indx;
        }
        else break;
    }
}
void delete_heap(vector<int> &v)
{
    v[0] = v[v.size()-1];
    v.pop_back();

    int cur = 0;

    while(true)
    {
        int left_indx = cur * 2 + 1;
        int right_indx = cur * 2 + 2;
        int last_indx = v.size() - 1;

        if(left_indx <= last_indx && right_indx <= last_indx)
        {
            //Duitai ache
            if(v[left_indx] >= v[right_indx] && v[left_indx] > v[cur])
            {
                swap(v[left_indx], v[cur]);
                cur = left_indx;
            }
            else if(v[right_indx] >= v[left_indx] && v[right_indx] > v[cur])
            {
                swap(v[right_indx], v[cur]);
                cur = right_indx;
            }
            else
            {
                break;
            }
        }
        else if(left_indx <= last_indx)
        {
            //left ache
            if(v[left_indx] > v[cur])
            {
                swap(v[left_indx], v[cur]);
                cur = left_indx;
            }
            else
            {
                break;
            }
        }
        else if(right_indx <= last_indx)
        {
            //right ache
            if(v[right_indx] > v[cur])
            {
                swap(v[right_indx], v[cur]);
                cur = right_indx;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}
void print_heap(vector<int> v)
{
    for(int val:v)
    {
        cout << val << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    
    vector<int> v;
    
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        insert(v, x);
    }
    
    print_heap(v);
    delete_heap(v);
    print_heap(v);

    return 0;
}