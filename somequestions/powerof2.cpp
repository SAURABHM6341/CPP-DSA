#include <iostream>
#include <math.h>
using namespace std;
int main(){
double n;
cin>>n;
float x = log(n)/log(2);
// cout<<x;
if (x!=30)
{
x = x-(int)x;
}
else
{
    x=0;

}
if (x==0)
{
    cout<<"true"<<endl;
}
else
{
    cout<<"false"<<endl;
}
// long double d = pow(2,30);
// cout<<d;
    return 0;
}