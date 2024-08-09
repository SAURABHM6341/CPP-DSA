#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
int data;
Node*next;
};
int main()
{
    map <int,string> m;
    // m[key] = value;//means aap ek key ko ek hi element ko pint kra skte ho ek key do elemnt ko poijnt nhi kregi
    m[1] = "saurabh";
    m[50] = "Mishra";
    m[2] = "is not a " ;
    m[5] = "is not a good coder"; 
    m.insert({6,"kutta"});
    for(auto i:m){
        cout<<i.first<<endl;
        cout<<i.second<<endl;
    }
    cout<<m.count(13);
    cout<<m.count(6);
    // after erase
    m.erase(6);
     for(auto i:m){
        cout<<i.first<<endl;
        cout<<i.second<<endl;
    } 
    auto it = m.find(2);
    for(auto i = it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }

    return 0;
};
