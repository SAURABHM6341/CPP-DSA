#include <bits/stdc++.h>
using namespace std;
string reversestr(string s,int i,int j){
if(i>j){
    return s;
}
char temp = s[i];
s[i] = s[j];
s[j] = temp;
i++;
j--;
return reversestr(s,i,j);
}
int main()
{
    string s;
    // cin>>s; it will not store whitespaces
    getline(cin,s);
    s = reversestr(s,0,s.length()-1);
    cout<<s;    
    return 0;
};
