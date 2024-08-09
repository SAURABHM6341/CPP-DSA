#include <bits/stdc++.h>
using namespace std;
class animal{
public :
string type;
string name;
int age;
private:
string s_code;
public:
string setscode(string n){
s_code = n;
}
string scode(){
    return s_code;
}
void print(){
    cout<<name<<endl;
    cout<<type<<endl;
    cout<<age<<endl;
    cout<<s_code<<endl;
}
};
class male{
    public:
int age; int name;
int working(){
    return 1;
}
};
class female{
    public:
int salary;
int name;
int workexp;
int working (){
    return 1;
}
};
class human: public male, public female{
//ye dono ko inherit kr liya
};
int main()
{
    //single inheritence-----jab ek class se ek hi class inherit ho use single inheritance kehte h
animal dog;
dog.type = "desi_sniffing";
dog.age = 5;
// dog.type = "sniffing";
dog.setscode("D-001");
dog.name = "Bholu";
dog.print();
//multilevel inheritance-----jab ek  class se dusri class inheritance kre aur dusri se teesri aur teesri se 4th  and so on to ise ham multilevel inheritance kehte h
//multiple inheritance----- jab ek sub class ke do parent class ho tab ye multiple inheritance kehlata h jaise male female dono ko human inherit kr le;
human sar;
//heirarical inheritance----- tree like structure;
//class a se b and c, b se d and e aur c se f and g aisa hi kuchh;
//hybrid inheritance---jab ek se jyada inheritance use kr rhe ho example---heirarical and multiple
//------------ambiguity----------
//using scope fuction
human saurabh;
saurabh.male::working();
saurabh.female::name;
    return 0;
};
