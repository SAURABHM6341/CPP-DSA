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
void insertatfirst(node*&head){
    int a;
    cout<<"enter the data of new head\n";
    cin>>a;
node*newnode = new node(a);
newnode->next = head;
head = newnode;
}
void printsll(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
int main()
{
    int a;
    cout << "enter the data of head nodde\n";
    cin >> a;
    node *head = new node(a);
    cout << "how many node you want to insert at first\n";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        insertatfirst(head);
    }
    printsll(head);

    return 0;
};
