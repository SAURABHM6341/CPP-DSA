#include <bits/stdc++.h>
using namespace std;
class hero
{
private:
    string name;
    int age;
    char mode;

public:
    int health;
    int level;
    static int Timetocomplete;
    hero()
    {
        cout << "no parameter's function called\n    Thank you for calling..!\n";
    }
    hero(int age, char mode, string name)
    {
        this->age = age;
        this->mode = mode;
        this->name = name;
    }
    void print()
    {
        cout << "----------Details----------" << endl;
        cout << "Name : " << name << endl
             << "Age : " << age << endl
             << "Mode : " << mode << endl
             << "Heath : " << health << endl
             << "Level : " << level;
    }
    ~hero()
    {
        cout << "destructor called\n";
    }
    static void random(){
        // cout<<health<<endl; it is giving error because static function sirf static memory(yani jo static keyword wale honge) ke object ko acess kr skta h
        cout<<hero::Timetocomplete<<endl;//as this is static it will acess and print it;
    }
};
    // static keyword
    //  it is use to create a member which depend upon class not on object mtlb agr acess krna h to obj bnane ki jarurat nhi h
//initialisation of static
// datatype classname ::field name  = value;
int hero::Timetocomplete = 25;
int main()
{
    hero h1(26, 'A', "knightinger_army");
    h1.health = 1200;
    h1.level = 12;
    h1.print();
    hero h2;
    h2 = h1; // copy assignment operator  copy ho jata h;
    h2.print();
    // one thing called destructor jo ki jha jis objet ka life scope khatam hota h use wha destroy kr deta h or memory deallocate kr deta h ye by default hota h constructor ke jaise aur ise ham khud ka bhi bna skte h
    // static allcation ke liye destruction apne se automatically called hota h
    // dynamically allocation ke liye baar baar manual call krna pdna h
    hero *h3 = new hero;
    *h3 = h2;
    hero *h4 = new hero;
    h4 = h3;
    delete h3;
    delete h4;
    // homework
    //  1. const keyword
    //  2. initialisation list
cout<<hero::Timetocomplete<<endl;//static hota h jaise game ka time no dependency wo apne hissab se hi chlega 
hero::random();
    return 0;
};
