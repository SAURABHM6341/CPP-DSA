#include <bits/stdc++.h>
using namespace std;
int linearsearch(int arr[],int n,int key,int i){
if(arr[i]==key){
    return 1;
}
if(i==n-1){
    return 0;
}
i++;
return linearsearch(arr,n,key,i);
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
    int key;
    cin>>key;
    if(linearsearch(arr,n,key,0)){
        cout<<"Element found\n";
    }
    else{
        cout<<"element not found\n";
    }
    return 0;
};
