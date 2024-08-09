#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *constructbinary(node *root)
{
    cout << "enter the data of node\n";
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "enter the data to insert in left of " << data << endl;
    root->left = constructbinary(root->left);
    cout << "enter the data to insert in right of " << data << endl;
    root->right = constructbinary(root->right);
    return root;
}
void levelordertraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data;
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void inordertraversal(node *root)
{
    if (root == NULL)
        return;
    inordertraversal(root->left);
    cout << root->data << " ";
    inordertraversal(root->right);
}
void preordertraversal(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}
void postordertraversal(node *root)
{
    if (root == NULL)
        return;
    postordertraversal(root->left);
    postordertraversal(root->right);
    cout << root->data << " ";
}
void biuldlevelorder(node *&root)
{
    queue<node *> q;
    cout << "enter the data for root\n";
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "enter the left node for : " << temp->data << endl;
        int lftdata, rytdata;
        cin >> lftdata;
        if (lftdata != -1)
        {
            temp->left = new node(lftdata);
            q.push(temp->left);
        }
        cout << "enter the right node for : " << temp->data << endl;
        cin >> rytdata;
        if (rytdata != -1)
        {
            temp->right = new node(rytdata);
            q.push(temp->right);
        }
    }
}
int main()
{
    node *root = NULL;
   /* root = constructbinary(root);
    levelordertraversal(root);
    cout << "\npreordertraversal-->\n";
    preordertraversal(root);
    cout << "\ninordertraversal-->\n";
    inordertraversal(root);
    cout << "\npostordertraversal-->\n";
    postordertraversal(root);*/
    biuldlevelorder(root);
      levelordertraversal(root);
    return 0;
};
// 2 1 4 -1 -1 5 -1 -1 6 7 -1 -1 8 -1 -1