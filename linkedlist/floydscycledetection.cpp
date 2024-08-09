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
void sol(node*&head){
    node*slow = head;
    node*fast = head;
    if(slow->next==slow){
        slow->next = NULL;
        return;
    }
    if(fast->next->next==fast){
fast->next->next=NULL;
return;
    }
    slow= slow->next;
    fast = fast->next->next;
    while (1)
    {
        if(fast==NULL||slow==NULL){
            return;
        }
        if(slow==fast){
            slow = head;
            break;
        }
        slow = slow->next;
        fast =fast->next->next;
    }
while (slow!=fast)
{
    slow = slow->next;
    fast = fast->next;
}
if(slow->next == slow){
    slow->next = NULL;
}else{
    fast = fast->next;
while(slow!=fast->next){
    fast  = fast->next;
}
cout<<"loop is created to "<<slow->data<<" from "<<fast->data<<endl;
fast->next = NULL;
}

    
}
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
    cout<<"enter a number from 0 to "<<n+1<<endl;
    int loop;
    cin>>loop;
    node*temp = head;
    node*last = head;
    if(loop!=0){

    while(last->next!=NULL){
        last = last->next;
    }
    for (int i = 0; i < loop-1; i++)
    {
        temp = temp->next;
    }
    last->next = temp;
    sol(head);
    }
    printsll(head);

    return 0;
};
