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
void insertatend(node *&head)
{
    cout << "enter the data of new node\n";
    int a;
    cin >> a;
    node *newnode = new node(a);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void printsll(node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
void deletenode(node *&head, int pos)
{
    node *temp = head;
    if (pos == 1)
    {
        head = head->next;
    delete (temp);
    }
    else
    {
        for (int i = 1; i <= pos - 2; i++)
        {
            temp = temp->next;
        }
        node *temp1 = temp;
        temp1 = temp1->next;
        temp->next = temp1->next;
        // temp = temp->next;
    delete (temp1);
    }
}
int main()
{
    int a;
    cin >> a;
    node *head = new node(a);
    cout << "how many node you want to insert except head\n";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        insertatend(head);
    }
    printsll(head);
    int pos;
    cout << "enter the position of element you wannt to delete\n(i based indexing)";
    cin >> pos;
    deletenode(head, pos);
    printsll(head);
    // cout<<head->data;
cout<<1%3;
    return 0;
};
