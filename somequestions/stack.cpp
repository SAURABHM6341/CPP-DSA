#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <string> s;
    s.push("mr. ");    
    s.push("rammani ");    
    s.push("mishra ");
    cout<<s.top();//it will print mishra bcause mishralast me gya h LIFO or FILO;    
    cout<<endl<<s.size();
    cout<<endl<<s.empty();
    return 0;
};
