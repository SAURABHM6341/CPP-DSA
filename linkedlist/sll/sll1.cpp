#include <bits/stdc++.h>
using namespace std;
class node{
    public:
int data;
node*next;
node(int data){
    this ->data = data;
    this ->next = NULL;
}
};
int main()
{
node*head = new node(25);
cout<<head->data<<endl;
cout<<head->next<<endl;
    return 0;
};
