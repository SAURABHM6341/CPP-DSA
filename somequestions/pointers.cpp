#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch = 'z';
    char arr[] = "ajio.com";
    char *c = &ch;
    cout<<ch<<endl;    //print z
    cout<<c<<endl;    //print the value stored in ch along with some other characterss because it does not contain null character
    cout<<*c<<endl;//print the value stored in ch i.e. , 'z';    
    cout<<arr<<endl;//print a jio.com
    char * p = arr;
    cout<<p<<endl;//print ajio.com
    cout<<*p<<endl;//print first value of p
    return 0;
};
