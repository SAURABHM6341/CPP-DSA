#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertatpos(node*&head,int pos){
    node*temp = head;
for (int i = 1; i < pos-1; i++)
{
    temp = temp->next;
}
node*temp1 = temp;
temp1  =temp1->next;
cout<<"enter the data of new node\n";
int a;
cin>>a;
node*newnode=  new node(a);
    if(pos==1){
    newnode->next = head;
    head = newnode;
    }else{
newnode->next = temp1;
temp->next = newnode;}
}
void printsll(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << endl;
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
    cout << "enter the data of head nodde\n";
    cin >> a;
    node *head = new node(a);
     cout<<"enter the no. of node except head node\n";
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        insertatend(head);
    }
    cout << "how many node you want to insert at specific position\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the position at which you want to insert (indexing from 1)\n";
        int pos;
        cin>>pos;
        insertatpos(head,pos);
    }
    printsll(head);
    return 0;
};
