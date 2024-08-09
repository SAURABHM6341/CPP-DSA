#include <bits/stdc++.h>
using namespace std;
int main()
{
    set <int> s;
    s.insert(5);    
    s.insert(0);    
    s.insert(0);    
    s.insert(0);    
    s.insert(0);    //koi bhi element chahe jitni baar daal lo wo ek hi baar set ke andat jayega kyoki ye ordered set h
    //unordered set me chahe jitni baar dalo utni baar aayega
    s.insert(2);    
    s.insert(1);    
    for (auto i:s ){
        cout<<i<<endl;//
    }
    set <int>::iterator it = s.begin();
    it++;//ye index 1 pr aaya aur 1 ko delte krega

    // s.erase(s.begin()+3);//aise nhi chalta h hame agr andar ka element dellete krna h to ek iterator bnana pdega
    s.erase(it);
    
    for (auto i:s ){
        cout<<i<<endl;//
    }
    cout<<s.count(5);//0 for nhi h set me and 1 for ha hai set me
    set <int>::iterator itr = s.find(5);
//it will return the iterator for 5 means for all element after 5 can be printed using this s.find;
for (auto it = itr; it != s.end(); it++)
{
    cout<<*it<<" ";
    
}


    return 0;
};
