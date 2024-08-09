#include <bits/stdc++.h>
using namespace std;
int main()
{
    //isme 1st element hmesha largest hota h yani max heap follow krta h min heap bhi kr skta h 
    //max heap;
    priority_queue <int> pmaxi;
    //chahe jis order me daal lo niklega min and max heap ke hisaa se hi;
    //minheap;
    priority_queue<int,vector<int>, greater <int>> mini;
    pmaxi.push(2);
    pmaxi.push(3);
    pmaxi.push(5);
    pmaxi.push(4);
    pmaxi.push(1);
    int n = pmaxi.size();
    for (int i = 0; i < n; i++)
    {
        cout<<pmaxi.top();
        pmaxi.pop();
    }
    mini.push(2);
    mini.push(3);
    mini.push(5);
    mini.push(4);
    mini.push(1);
    int p = mini.size();
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<mini.top();
        mini.pop();
    }
    

    return 0;
};
