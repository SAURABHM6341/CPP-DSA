//dynamic polymorphism

//compile time ko static polymorphism kehte h

// example--jaise animal ek parent class h aur uska member h speak ab ek chid class h dog jo ki isko inherit krta h lekin dog to speak nhi krta wo to bark krega to dog speak function ko apni class ke andar apne hisaab se modify krke use krega yhi kehlata h polymorphism in runtime
/*rules:-
1) the method of parent class and method of child class should be same and should have same type of arguments
2) iheritance occur krni chahiye
*///function override kehlata h
#include <bits/stdc++.h>
using namespace std;
class qwerty{
public:
int a;
void func(){
    cout<<"parent wala hoon\n";
}
};
class yuiop:public qwerty{
public:
void func(){
    cout<<"sub-class wala hoon\n";
}
};
int main()
{
    yuiop saurabh;
    saurabh.func();
    qwerty heera;
    heera.func();
    return 0;
};
