#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insertatend(node *&head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    cout << "enter the data of newnode\n";
    int a;
    cin >> a;
    node *newnode = new node(a);
    temp->next = newnode;
    newnode->prev = temp;
}
void printdll(node *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}
void insertathead(node *&head)
{
    int a;
    cout << "enter the value of newnode\n";
    cin >> a;
    node *newnode = new node(a);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
void insertatpos(node *&head)
{
    cout << "enter the position before which you want to insert\n";
    int pos;
    cin >> pos;
    node *temp = head;
    if (pos == 1)
    {
        insertathead(head);
    }
    else
    {
        cout << "enter the data of newnode\n";
        int a;
        cin >> a;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        node *temp1 = temp->next;
        node *newnode = new node(a);
        newnode->next = temp1;
        temp1->prev = newnode;
        temp->next = newnode;
        newnode->prev = temp;
    }
}
void deleteatend(node *&head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    temp->prev = NULL;
    delete (temp);
}
void deleteatfirst(node *&head)
{
    node *temp = head;
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    delete (temp);
}
void deleteatpos(node *&head)
{
    node *temp = head;
    int pos;
    cout << "enter the position of deleting node(1-based indexing)\n";
    cin >> pos;
    if (pos == 1)
    {
        deleteatfirst(head);
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        if (temp->next == NULL)
        {
            deleteatend(head);
        }
        else
        {
            temp->next->prev = temp->prev;
            temp->prev->next = temp->next;
            temp->prev = NULL;
            temp->next = NULL;
            delete (temp);
        }
    }
}

int main()
{
    cout << "how many node you want to create\n";
    int n;
    cin >> n;
    cout << "enter the value of head node\n";
    int a;
    cin >> a;
    node *head = new node(a);
    for (int i = 0; i < n - 1; i++)
    {
        insertatend(head);
    }
    // cout<<head->next->data;
    while (1)
    {
        // printdll(head);
        cout << "0 for exit\n1 for insertathead\n2 for insertatpos\n3 for insertatend\n";
        int t;
        cin >> t;
        if (t == 1)
        {
            insertathead(head);
        }
        if (t == 2)
        {
            insertatpos(head);
        }
        if (t == 3)
        {
            insertatend(head);
        }
        if (t == 0)
        {
            break;
        }
        printdll(head);
    }
    while (1 && head->next != NULL)
    {
        printdll(head);
        cout << "0 for exit\n1 for deleteathead\n2 for deleteatpos\n3 for deleteatend\n";
        int t;
        cin >> t;
        if (t == 1)
        {
            deleteatfirst(head);
        }
        if (t == 2)
        {
            deleteatpos(head);
        }
        if (t == 3)
        {
            deleteatend(head);
        }
        if (t == 0)
        {
            break;
        }
    }

    return 0;
};
