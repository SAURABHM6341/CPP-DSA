#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<int>st;
    for (int i = 0; i < s.length(); i++)
    {
    st.push(s[i]);
    }
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = st.top();
        st.pop();
    }
    cout<<s<<endl;
    return 0;
};
// reversing a string using stack is not optimal because space complexity is O(n) and T.C. is also the same;
// revrse the string using builtin function or two pointer appraoch that is optimal in space i.e., O(1) and T.c. is still O(n);