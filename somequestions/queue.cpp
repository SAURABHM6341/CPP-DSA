#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue <string> s;
    s.push("saurabh");    
    s.push(" is ");    
    s.push("a bad coder\n");    
    cout<<s.back();
    cout<<endl<<s.front();
    s.pop();
    //saurabh is popped out
    cout<<endl<<s.front();
    cout<<s.empty();
    queue <char> c;
    c.push('s');
    c.push('a');
    c.push('u');
    c.push('r');
    c.push('a');
    c.push('b');
    c.push('h');
    cout<<c.front();
    //int ka bhi bna skte h;
    return 0;
};
