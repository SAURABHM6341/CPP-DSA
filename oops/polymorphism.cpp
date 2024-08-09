    //poly morphissm means multiple forms
    // like your father is your father his mother's son your mothers husband your buaa's brother;
    // -->compile time and runtime
    // ------compile time---------
#include <bits/stdc++.h>
using namespace std;
class a{
public:
void sayhello(){

    cout<<"hello saurabh mishra\n";
}
void sayhello(int n){
cout<<"hello saurabh mishra\n";
}
void sayhello(char gh){//aap ek se jayada function same naam ke bna skte h agr unke no. of arguments different ho ya fir argument type diffenent ho;
// called function overloading
cout<<"hello bhaiya";
}
};
void add(int x,int y,int z = 0, int k = 10){
    cout<<x+y+z+k;
}
int main()
{
        
        a saurabh;
        saurabh.sayhello();
        //default arguments wale function isme ham kisi element ko declare krte samay hi kuchh value de de to agr function call huyi to jinhe ham phle se hi define kiye h unhe argument me pass krna optional hota h agr paas kroge to overwrite ho jayega nhi kroge to whi rhega
        add(10,20);
        cout<<endl;
        add(10,20,30);
        cout<<endl;
        add(10,20,30,40);
        //operator overloading
        //  i want that + ko jab use kru to mujhe hi bole ya substract krde
    return 0;
};
