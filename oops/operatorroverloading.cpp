#include <bits/stdc++.h>
using namespace std;
class add{
    public:
int a;
int b;
public:
int addition(){
    return a+b;
}
void operator + (add &obj){//yha pe jo + ke baad likha h wo paas hoga (+ binRY operator h isiliye do argument lge h aur bracket unary h to kuchh paas nhi kiya jiske liye kiya wo use hua;)
    int op1 = this->a;//ye + ke pehle wala a h
    int op2 = obj.a;//ye + ke baad wala
    cout<<op2-op1<<endl;
}
void operator ()(){
    cout<<this->b*this->a;
}
};
int main()
{
  add saurabh;
  saurabh.a = 5;
  saurabh.b = 7;
//   cout<<saurabh.addition()<<endl;
add saurabh1;
saurabh1.a = 67;
saurabh1.b = 2;
  saurabh + saurabh1;      
  saurabh1 + saurabh;      
  saurabh();
  saurabh1();
    return 0;
};
