#include <bits/stdc++.h>
using namespace std;
int sum(int arr[], int size,int indi){
    if (indi==size-1)
    {
        return arr[indi];
    }
    int addition = arr[indi];
    indi++;
    return addition+sum(arr,size,indi);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<sum(arr,n,0);
    return 0;
};
