#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(5);
    l.push_front(4);    
    l.push_front(3);
    for(int i:l){
        cout<<i<<" ";
    }    
    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<l.empty();
    list <int> k(l);//list l puri k me copy ho gyi same tareeke se vector ko bhi coppy kr skte h;
    //vector <int> v(s);//let say s koi vector hoga purana wala use nye me copy kr diye
    //vector <int> v(6,100); aise likhne se vector ki size 6 aur saare element by default 100 rhenge (can be changed);
    for(int i:l){
        cout<<i<<" ";
    }

    return 0;
};
