#include <bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node * next;
node(int data){
    this ->data = data;
    this->next = NULL;
}
};
void printsll(node*temp){
    while (temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    
}
void insertatend(node*&head){
    cout<<"enter the data of new node\n";
    int a;
    cin>>a;
    node*newnode = new node(a);
    node*temp = head;
    while(temp->next!=NULL){
        temp  =temp->next;
    }
    temp->next = newnode;
}
int main()
{
    int a;
    cout<<"enter the data of head nodde\n";
    cin>>a;
    node*head = new node(a);
    cout<<"enter the no. of node except head node\n";
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        insertatend(head);
    }
    printsll(head);
        
    return 0;
};
