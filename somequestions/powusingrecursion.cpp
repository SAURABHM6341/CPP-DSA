#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
ull int power(ull int a,ull int b)
{
    if (b==0)
    {
        return 1;
    }
    if(b==1)
    return a;
    if (b%2==0)
    {
        return power(a,b/2)*power(a,b/2);
    }
    return power(a,b/2)*power(a,b/2)*a;
    

    
}
int main()
{
    ull int a,b;
    cin>>a>>b;
ull int ans = power(a,b);
    cout<<ans;

    return 0;
};
