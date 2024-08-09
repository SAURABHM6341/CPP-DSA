#include <bits/stdc++.h>
// make only tail to opearate;
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
void insertatend(node *&tail)
{
    cout << "enter the data of new node\n";
    int a;
    cin >> a;
    node *newnode = new node(a);
    newnode->next = tail->next;
    tail->next = newnode;
    tail = newnode;
}
void printdll(node *tail)
{
    if (tail->next != tail)
    {
        node *temp = tail->next;
        while (temp != tail)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
        cout << temp->data << endl;
    }
    else
    {
        cout << tail->data << endl;
    }
}
void insertatfirst(node *&tail)
{
    cout << "enter the value of new node\n";
    int a;
    cin >> a;
    node *newnode = new node(a);
    newnode->next = tail->next;
    tail->next = newnode;
}
void insertatpos(node *&tail)
{
    cout << "enter the position before which you want to insert\n";
    int pos;
    cin >> pos;
    node *temp = tail;
    int count = 1;
    if (temp->next != tail)
    {
        temp = temp->next;
        while (temp != tail)
        {
            count++;
            temp = temp->next;
        }
    }
    if (count == pos - 1)
    {
        insertatend(tail);
    }
    else
    {
        cout << "enter the data of newnode\n";
        int a;
        cin >> a;
        temp = tail;
        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }
        node *newnode = new node(a);
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
void deleteatend(node *&tail)
{
    if (tail->next != tail)
    {
        node *temp = tail->next;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        tail = temp;
        temp = temp->next;
        tail->next = temp->next;
        temp->next = NULL;
        delete (temp);
    }
    else
    {
        cout << "Attention! you can not delete the last node\nplease press 0 to exit the program\n";
    }
}
void deleteatfirst(node *&tail)
{
    if (tail->next != tail)
    {
        node *temp = tail->next;
        tail->next = temp->next;
        temp->next = NULL;
        delete (temp);
    }
    else
    {
        cout << "Attention! you can not delete the last node\nplease press 0 to exit the program\n";
    }
}
void deleteatpos(node *&tail)
{
    cout << "enter the position which you want to delete\n";
    int pos;
    cin >> pos;
    node *temp = tail;
    int count = 1;
    if (temp->next != tail)
    {
        temp = temp->next;
        while (temp != tail)
        {
            count++;
            temp = temp->next;
        }
    }
    if (count == 1)
    {
        deleteatfirst(tail);
    }
    else if (count == pos)
    {
        deleteatend(tail);
    }
    else
    {
        temp = tail;

        for (int i = 1; i < pos; i++)
        {
            temp = temp->next;
        }
        node *temp1 = temp->next;
        temp->next = temp->next->next;
        temp1->next = NULL;
        free(temp1);
    }
}

int main()
{
    cout << "how many node you want to create\n";
    int n;
    cin >> n;
    cout << "enter the value of new node\n";
    int a;
    cin >> a;
    node *tail = new node(a);
    tail->next = tail;
    for (int i = 0; i < n - 1; i++)
    {
        insertatend(tail);
    }
    // cout<<tail->next->data;
    while (1)
    {
        // printdll(tail);
        cout << "0 for exit\n1 for insertatfirst\n2 for insertatpos\n3 for insertatend\n";
        int t;
        cin >> t;
        if (t == 1)
        {
            insertatfirst(tail);
        }
        if (t == 2)
        {
            insertatpos(tail);
        }
        if (t == 3)
        {
            insertatend(tail);
        }
        if (t == 0)
        {
            break;
        }
        printdll(tail);
    }
    while (1 && tail->next != NULL)
    {
        printdll(tail);
        cout << "0 for exit\n1 for deleteatfirst\n2 for deleteatpos\n3 for deleteatend\n";
        int t;
        cin >> t;
        if (t == 1)
        {
            deleteatfirst(tail);
        }
        if (t == 2)
        {
            deleteatpos(tail);
        }
        if (t == 3)
        {
            deleteatend(tail);
        }
        if (t == 0)
        {
            break;
        }
    }

    return 0;
};
