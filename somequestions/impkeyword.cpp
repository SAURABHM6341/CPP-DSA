#include <bits/stdc++.h>
//macros
//macros--->> a piece of code in a program that is  replaced by value of macro
//examples:- 
#define max 12
#define ull unsigned long long int
//global variable
int a = 5;
//now we can acess a for every function which we need but it cannot be any variable only contant things
//INLINE FUNCTION -- use to reduce function calls
inline int ab(int c,int b){//agr function ek line ka h like this to aaram se inline ban jayega agr greater than 3 line ka h to nhi bnega agr 2 aur 3 ka h to compiler dependent
//ye bhi define ki hi trh hota h jha function call hui h wha return hone wale se replace ho jayega
    return (c>b) ? c : b;
}
using namespace std;
int main()
{
    int c,b;
    c = 5;b = 6;
    //default arguments;
    //agr kisi function me ariable jab declare krte h pass hone agr unko value assogn kiye to wo default argument ban jaate h 
    int getsum(int d,int e=0);//function prototype declaration
    cout<<getsum(c,b)<<endl;
    cout<<getsum(c);//yha maine paas nhi kiya to wo zero le lega
    return 0;
};
int getsum(int d,int b = 0){
//isse d optional ho gya agr d pass kroge to thik nhi kroge to zero hi lelgega; called default argument
return d+b;
}
