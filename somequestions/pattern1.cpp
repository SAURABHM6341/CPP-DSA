#include <iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value of n : ";
cin>>n;
int b = 1;
for (int i = n; i >0; i--)
{
    int a= i-1;
    for (int j = 1; j <=a ; j++)
    {
        cout<<" ";
    }
    for (int k = 0; k <b; k++)
    {
        cout<<"*";
    }
    b= b+2;
    cout<<"\n";
}

    return 0;
}