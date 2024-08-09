#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int > v;
    v.push_back(1);    
    v.push_back(2);    
    v.push_back(5);    
    v.push_back(3);    
    v.push_back(0);
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<endl;
    }  
    cout<<lower_bound(v.begin(),v.end(),2)- v.begin()<<endl;  
    cout<<upper_bound(v.begin(),v.end(),5)- v.begin()<<endl;  
    cout<<binary_search(v.begin(),v.end(),6)<<endl;
     reverse (v.begin(),v.end());
     for(auto i:v){
        cout<<i<<endl;
    }   
//string me bhi ye saare operation lga skte h
//rotate me three parameter hote h start pivot and end;
rotate(v.begin(),v.begin()+2,v.end());
for(auto i:v){
        cout<<i<<endl;
    }  
    return 0;
};
