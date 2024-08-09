#include <bits/stdc++.h>
using namespace std;
int ispalindrome(string &s,int i,int j){
    if (i>j)
    {
        return 1;
    }
    if(s[i]!=s[j]){
        return 0;
    }
    i++;
    j--;
    return ispalindrome(s,i,j);
    
}
int main()
{
    string s;
    getline(cin,s);
    cout<<ispalindrome(s,0,s.length()-1);
    return 0;
};
