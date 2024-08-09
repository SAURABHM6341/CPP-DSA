#include <bits/stdc++.h>
using namespace std;
string digitoword(int n){
    if (n==0)
    {
        return "Zero";
    }
    if (n==1)
    {
        return "One";
    }
    if (n==2)
    {
        return "Two";
    }
    if (n==3)
    {
        return "Three";
    }
    if (n==4)
    {
        return "Four";
    }
    if (n==5)
    {
        return "Five";
    }
    if (n==6)
    {
        return "Six";
    }
    if (n==7)
    {
        return "Seven";
    }
    if (n==8)
    {
        return "Eight";
    }
    if (n==9)
    {
        return "Nine";
    }
}
void saydigit(int n,int i,int j){
    if(n==0&&i==j){
        return;
    }
    int a = n%10;
    i++;
    saydigit(n/10,i,j);
    string s = digitoword(a);
    cout<<s<<" ";
    return ;
}
int main()
{
    int n;
    cin>>n;
    int count = 0;
    int a = n;
    while(n!=0){
        count++;
        n/=10;
    }
    saydigit(a,0,count);    
    return 0;
};
