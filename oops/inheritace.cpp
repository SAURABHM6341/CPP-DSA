#include <bits/stdc++.h>
using namespace std;
class human
{
public:
int height;
int weight;
string eye_color;
string skin_color;
};
class male: public human{
    //pubic class ke andar jo data member h wo male ke data memenber ban jayenge but ye bhi public mode me hi ayyengekyoki hamne public bas eke tehat liya h 
    //agr ham yha class male private likhte to ye male ke andar private ban jate 
    //base agr public h to public mode me aur private dono mode me ya kisi bhi mode me le skte h le skte h  leki agr private base h to inherit nhi kr skte h  
    //base ahr protected h to agr ham public me inherit krenge to wo protected me badal jayega bakiyon me jaise loge waisee hi rhega
    //refer to code studio blog for more clearity

    //protected--- ye mode similar to private h koi ise bahar se access nhi kr skte h aur sirf class ke andar hi access kr skte h 
    //but unlike private sub class ise access kr skti h  
};
class female: public human{
};
int main()
{
male saurabh;
saurabh.height = 6;
saurabh.weight = 65;
saurabh.eye_color = "brown";
saurabh.skin_color = "default";
female ladki;
ladki.height = 5;
ladki.weight = 50;
ladki.eye_color = "brown";
ladki.skin_color = "default";
male::human saurabh;
female::human ladki;

    return 0;
};
