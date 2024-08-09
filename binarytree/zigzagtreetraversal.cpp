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
vector <int> levelordertraversal(node *root)
{
    vector <int> result;
    	if(root==NULL){
    	    return result;
    	}
    	queue <node*> q;
    	q.push(root);
    	bool ltor = true;
    	while(!q.empty()){
    	    int size = q.size();
    	    vector <int> ans(size);
    	    for(int i=0;i<size;i++){
    	        node*frontnode = q.front();
    	        q.pop();
    	        int index = ltor?i:size-i-1;
    	        ans[index] = frontnode->data;
    	        if(frontnode->left){
    	            q.push(frontnode->left);
    	        }
    	         if(frontnode->right){
    	            q.push(frontnode->right);
    	        }
    	    }
    	        ltor = !ltor;
    	    for(auto i:ans){
    	        result.push_back(i);
    	    }
    	}
    	return result;
}
int main()
{
    node *root = NULL;
    root = constructbinary(root);
    vector <int> arr= levelordertraversal(root);
    for (auto i:arr){
        cout<<i<<" ";
    }

    return 0;
};
//1 2 6 -1 -1 7 8 -1 -1 -1 3 4 -1 9 -1 -1 5 -1 -1