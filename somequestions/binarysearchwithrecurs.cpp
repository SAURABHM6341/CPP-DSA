#include <bits/stdc++.h>
using namespace std;
int binasearch(int n,int arr[], int l, int m, int h, int key)
{
    
    if (m<l||m>h||l > h||l>=n||m>=n||h>=n||key>arr[h]||key<arr[l])
    {
        return -1;
    }
    if (arr[m] == key)
    {
        return m;
    }
    if (arr[l] == key)
    {
        return l;
    }
    if (arr[h] == key)
    {
        return h;
    }
    if (arr[m] > key)
    {
        h = m;
    }
    if (arr[m] < key)
    {
        l = m;
    }
    m = (l + h) / 2;
    return binasearch(n,arr, l, m, h, key);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout<< binasearch(n,arr,0,(n-1)/2,n-1,key);
    return 0;
};
