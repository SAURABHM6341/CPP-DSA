#include <iostream>
using namespace std;
int main(){
    char a;
    cout<<"enter the value of a\n";
    cin>>a;
    int b = (int)a;
    if (b>=48&&b<=57)
    {
        cout<<"this is numeric\n";
    }
    else if (b>64&&b<91)
    {
        cout<<"this is uppercase letter\n";
    }
    else if (b>96&&b<123)
    {
        cout<<"this is lowercase letter";
    }
    else
    {
        cout<<"invalid operation\n";
    }
    
    
    
    
}