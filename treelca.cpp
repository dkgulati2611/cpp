#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node *lca(Node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }
    Node *left = lca(root->left, n1, n2);
    Node *right = lca(root->right, n1, n2); 

    if (left != NULL && right != NULL)
    {
        return root;
    }
    if (left == NULL && right == NULL)
    {
        return NULL;
    }
    if (left != NULL)
    {
        return lca(root->left, n1, n2);
    }
    return lca(root->right, n1, n2);
}
bool getpath(Node* root,int n1,vector <int> &path){
    if (root == NULL)
    {
        return false;
    }
    
    path.push_back(root->data);
    if (root->data == n1)
    {
        return true;
    }
    if (getpath(root->left,n1,path) || getpath(root->right,n1,path))
    {
        return true;
    }
    path.pop_back();
    return false;
    
}
int LCA(Node* root,int n1,int n2){                           // complexit: O(n)
    vector<int> path1 ,path2;
    if (!getpath(root,n1,path1) || !getpath(root,n2,path2))
    {
        return -1;
    }
    int pc;
    for(pc = 0;pc<path1.size() && path2.size();pc++){
        if (path1[pc] != path2[pc])
        {
            break;
        }
        
    }
    return path1[pc-1];
}
int finddist(Node *root, int k, int dist)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == k)
    {
        return dist;
    }
    int left = finddist(root->left, k, dist + 1);
    if (left != -1)
    {
        return left;
    }
    return finddist(root->right, k, dist + 1);
}
int distancebtwNode(Node *root, int n1, int n2)
{
    Node *LCA = lca(root, n1, n2);
    int d1 = finddist(LCA, n1, 0);
    int d2 = finddist(LCA, n2, 0);
    return (d1 + d2);
}
void flatten(Node *root)
{
    if (root == NULL || root->left == NULL && root->right == NULL)
    {
        return;
    }

    if (root->left)
    {
        flatten(root->left);
        Node *temp = root->right;
        root->right = root->left;
        root->left = NULL;

        Node *t = root->right;
        while (t->right)
        {
            t = t->right;
        }
        t->right = temp;
    }

    flatten(root->right);
}
void inorderprint(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderprint(root->left);
    cout << root->data << " ";
    inorderprint(root->right);
}
/*          1
           /  \
          2    3
         /      \
        4        5
*/

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);

    cout << distancebtwNode(root, 4, 5) << endl;

    int n1 = 5;
    int n2 = 4;
    int Lca = LCA(root,n1,n2);
    if (Lca == -1)
    {
        cout<<"lca does'nt exist"<<endl;
    }
    else{
        cout<<"lca : "<<Lca<<endl;
    }
    

    flatten(root);
    inorderprint(root);


    return 0;
}