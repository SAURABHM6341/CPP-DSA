#include <bits/stdc++.h>
using namespace std;
class hero
{
private:
    int health;
    int difficulty_level;

public:
    char mode;
    string name;
    int gethealth()
    {
        return health;
    }
    int getdiflvl()
    {
        return difficulty_level;
    }
    string getname()
    {
        return name;
    }
    char getmode()
    {
        return mode;
    }
    void sethealth(int health1)
    {
        health = health1; // yha maine parameter ka naam badal diya to this ki jarurat nhi pdi
    }
    void setdiflvl(int diffilvl)
    {
        difficulty_level = diffilvl;
    }
    void setname(string name)
    {
        this->name = name;
    }
    void setmode(char mode)
    {
        this->mode = mode; // agr parameter ka name bhi same h to this ka use kre vhahe constructor function ho ya anya fuction ho
    }
    hero()
    {
        cout << "fuction called\n";
    }
    hero(int health)
    {
        this->health = health;
    }
    hero(char mode, int difficulty_level,string name)
    {
        this->mode = mode;
        this->difficulty_level = difficulty_level;
        this->name = name;
    }
    // hero(hero& temp){
    //     //function me hmesha object hi paas hoga aur jaise hamne yha temp likha to yemp namak ra,esh ki copy ban jayegi which is not allowed hame & ka upyog krna pdega aur usi memory ko point krwana pdega reference variable banana pdega wrna copy bnegi aur copy ka function call hoga jo wo khud h aur infinite loop me phas jayega 
    //     cout<<"copy constructor called\n";
    //     this->health = temp.health;
    //     this->mode = temp.mode;
    // }
};
int main()
{
    hero ram(200);
    hero ramesh('a', 2,"saurabh");
    hero defs(ramesh);//ab ramesh ki sari entry defs me bhi copy ho jayegi
    //agr mai bina parameter wale hero function ko hta du aur phir niche se mai hero saurabh likhu jisme koi parameter nhi paas hoga aur mere hero function parameter wale h to mera code error dega ki koi parameter paas kro bina parameter wala function nhi h lekin default function bina parameter ka hota h but hamne fuction banaya isiliye default wale deleyte ho gay
    //upar wai cheez copy constructor kehlati h
    //ham apna copy construct ka functio bhi bns skte h
    cout<<ramesh.mode<<endl;
    cout<<defs.mode<<endl;
    // ramesh.setname("saurabh");
    // cout<<ramesh.getname()<<endl;
    // ramesh.name[0] = 't';
    // cout<<ramesh.getname()<<endl;
    ramesh.setmode('d');
    cout<<ramesh.getmode()<<endl;
    cout<<defs.getmode()<<endl;
    // cout<<defs.getname()<<endl; //yha pe abhi kuch print nhi huya hoga kyoki koi value nhi di gyi h lekin agr ham default copy constructor ks use krte h to usme jo copy banti h wo agr ek ko change kroge to sab change ho jayegi ony in array case jisme adress hi copy ho jate h as we have not ceated array(char int string kisi ki bhi array) inside class so jaakke khi aur se pdho ya lecture dekh lo oops lec 1;   
    //examples dekhne ke liye apne copy constructor function ko comment kr do aur dekh lo

    return 0;
};
