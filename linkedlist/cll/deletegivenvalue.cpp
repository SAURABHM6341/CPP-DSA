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

void deleteatpos(node *&tail,int pos)
{
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
void findindex(node*&tail,int value){
if(tail->data==value){
    deleteatend(tail);
}
else if(tail->next->data==value){
    deleteatfirst(tail);
}
else{
    int count = 1;
node*temp = tail->next;
while (temp!=tail)
{
    if(temp->data==value){
        deleteatpos(tail,count);
        break;
    }
    count++;
    temp = temp->next;
}
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
    int value;
    cout<<"ente the value of node which is to be deleted\n";
    cin>>value;
findindex(tail,value);
printdll(tail);
    return 0;
}