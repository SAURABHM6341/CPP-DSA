#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(89);
    d.push_back(895);
    d.push_front(98);
    d.push_front(5465);
    cout << d.at(0) << endl;
    cout << d.at(1) << endl;
    cout << d.at(2) << endl;
    cout << d.at(3) << endl;
    cout << d.size() << endl;
    d.pop_back();
    d.pop_front();
    cout << d.at(0) << endl;
    cout << d.at(1) << endl;
    // d.clear();
    d.erase(d.begin(),d.begin()+1);//delete the first element 
    cout << d.size() << endl;

    return 0;
};
