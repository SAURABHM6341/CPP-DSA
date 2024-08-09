#include <bits/stdc++.h>
using namespace std;
class hero{//hero ek class h;
// int integer;
private:
string name;
int health;
int age;
private:
string skill;
public:
hero(){//constructor
    cout<<"hero ko call lagayi ja chuki h\n";
}
//parameterised constructor
hero (int health){
this -> health = health;//ye stement confusing kimkonsa health kis health ko point kr rha 
    //paramenter me health h aur mai ramesh ki health me health daalna chahta hu but mujhe mhi pata konsa kisme 
//use this keyword which stores adress of element of object
//this will store adress of object wala health and health without this wala is passed health
cout<<"adress of this ->  "<<this<<endl;
}    
void function(){
skill = "html";
cout<<skill<<endl;
}
int setage(int n){
    age = n;
}
int getage(){
    return age;
}
//isis tarah ham har ek char int string in sab se liye function bna kr khel skte h okay....?
//getter and setter --maan lo koi private object ko acess krna h to simple class ke public ke andar fuction bna lo as class ke andar wo private and public dono ko acess kr skta h to ham ramesh.function jaisi call marrenge to sab nikal aayega 
};
int main()
{
    hero ramesh(10);
    // hero ramesh;//now ramesh is a object of hero class
    // cout<<sizeof(hero)<<endl;//hero ke andar sirf int h jo ki 4 byte ka h 
    //empty class ko 1 byte memory milti h
    //agr aap class ko dure file me bnate h aur use is file se acess krna chahte h to #include "filename.cpp"<with quotes>
    // for acessing element of class
    //cout<<ramesh.health;//currently it is giving error of health is private member 
    /*3 types of access modifier public private and protected
    by default private hota h 
    (1) public--- can be access out of class also
    (2) private--cannot access out of class
    (3) protected-- */
    // ramesh.age = 25;
    // cout<<ramesh.age<<endl;
    ramesh.function();
    hero ram; //isko likhne par constructor ko call jati h mtlb hero function ko call jati h jo by default created hoti hram.hero() aur agr aapne class ke andar ise banaya h to use call jati h aur default ko nhi jati h
    ramesh.setage(25);
    ram.setage(23);
    cout<<" ramesh: "<<ramesh.getage()<<endl;
    cout<<"ram : "<<ram.getage()<<endl;
    //dynamically allocation of object
    hero*a = new hero;//hero ki jagah hero() bhi likh skte h
    (*a).setage(9874);//agr dynamically allocate h to -> ye wala arrow use kiya to * lgane ki jarurat nhi h
    cout<<(*a).getage();
    cout<<endl<<a->getage();
    cout<<"adress of ramesh : \n"<<&ramesh<<endl;

    return 0;
};
