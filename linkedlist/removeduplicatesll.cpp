#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
void insertatend1(Node *&head1, int data)
{
    Node *newnode = new Node(data);
    Node *temp = head1;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void insertatend(Node *&head)
{
    cout << "enter the data of new node\n";
    int a;
    cin >> a;
    Node *newnode = new Node(a);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void delete1node(Node*&head,Node*cnode,Node*pnode){
if(head->next==NULL){
    delete(head);
}

    pnode->next  =cnode->next;
    delete(cnode);
}
// **************without deleting node*******************
// Node* removedupli(Node *head)
// {
//     Node *temp = head;
//     map<int, bool> visited;
//     visited[head->data] = true;
//     Node *thead = new Node(head->data);
//     while (temp->next != NULL)
//     {
//         if (visited[temp->next->data] != true)
//         {
//             visited[temp->next->data] = true;
//             insertatend1(thead, temp->next->data);
//         }
//         temp = temp->next;
//     }
//     // print(thead);
//         // cout<<thead->/next->data;
//     return thead;
// }
// **********modifying og list********
void removedupli(Node *&head)
{
    Node *temp = head;
    Node *ptemp = head;
    map<int, bool> visited;
    visited[head->data] = true;
    temp = temp->next;
    while (temp!= NULL)
    {
        if (visited[temp->data] != true)
        {
            visited[temp->data] = true;
        ptemp = temp;
    temp = temp->next;
    continue;
        }
        if (visited[temp->data] == true)
        {
            delete1node(head, temp,ptemp);
        temp = ptemp->next;
        }
    }
}
int main()
{
    int l;
    cout << "enter the length of linked list\n";
    cin >> l;
    int a;
    cout << "enter the data of new node";
    cin >> a;
    Node *head = new Node(a);
    for (int i = 0; i < l - 1; i++)
    {
        insertatend(head);
    }
    print(head);
    cout << "duplicate elements have been removed\nmodified LInked list is\n";
    removedupli(head);
    print(head);
    return 0;
};
