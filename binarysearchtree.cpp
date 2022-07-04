#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int val) 
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node *insertbst(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }

    if (val < root->data)
    {
        root->left = insertbst(root->left, val);
    }
    else
    {
        root->right = insertbst(root->right, val);
    }
    return root;
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
Node *searchinbst(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == key)
    {
        return root;
    }
    if (root->data > key)
    {
        return searchinbst(root->left, key);
    }
    return searchinbst(root->right, key);
}
Node *inordersucc(Node *root)
{
    Node *curr = root;
    while (curr and curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}
Node *deleteinbst(Node *root, int key)
{
    if (root->data > key)
    {
        root->left = deleteinbst(root->left, key);
    }
    else if (root->data < key)
    {
        root->right = deleteinbst(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }

        Node *temp = inordersucc(root->right);
        root->data = temp->data;
        root->right = deleteinbst(root->right, temp->data);
    }
    return root;
}
Node *constructbst(int preorder[], int *preorderidx, int key, int min, int max, int n)
{
    if (*preorderidx >= n)
    {
        return NULL;
    }
  
    Node *root = NULL;
    if (key > min and key < max)
    {
        root = new Node(key);
        *preorderidx = *preorderidx + 1;
        if (*preorderidx < n)
        {
            root->left = constructbst(preorder, preorderidx, preorder[*preorderidx], min, key, n);
        }
        if (*preorderidx < n)
        {
            root->right = constructbst(preorder, preorderidx, preorder[*preorderidx], key, max, n);
        }
    }
    return root;
}
bool isbst(Node *root, Node *max = NULL, Node *min = NULL)
{
    if (root == NULL)
    {
        return true;
    }
    if (min != NULL && root->data <= min->data)
    {
        return false;
    }
    if (max != NULL && root->data >= max->data)
    {
        return false;
    }

    bool leftvalid = isbst(root->left, root, min);
    bool rightvalid = isbst(root->right, max, root);
    return leftvalid and rightvalid;
}
Node *sortedarraytobst(int arr[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }

    int mid = (start + end) / 2;
    Node *root = new Node(arr[mid]);
    root->left = sortedarraytobst(arr, start, mid - 1);
    root->right = sortedarraytobst(arr, mid + 1, end);
    return root;
}
vector<Node *> constructtrees(int start, int end)
{
    vector<Node *> trees;
    if (start > end)
    {
        trees.push_back(NULL);
        return trees;
    }

    for (int i = start; i <= end; i++)
    {
        vector<Node *> leftsubtrees = constructtrees(start, i - 1);
        vector<Node *> rightsubtrees = constructtrees(i + 1, end);

        for (int j = 0; j < leftsubtrees.size(); j++)
        {
            Node *left = leftsubtrees[j];
            for (int k = 0; k < rightsubtrees.size(); k++)
            {
                Node *right = rightsubtrees[k];
                Node *node = new Node(i);
                node->left = left;
                node->right = right;
                trees.push_back(node);
            }
        }
    }
    return trees;
}
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void zigzagtraverse(Node* root){
    if (root == NULL)
    {
        return;
    }
    
    stack<Node*> currlvl;
    stack<Node*> nextlvl;

    bool lefttoright = true;
     currlvl.push(root);
    while (!currlvl.empty())
    {
        Node* temp = currlvl.top();
        currlvl.pop();

        if (temp)
        {
            cout<<temp->data<<" ";
            
            if (lefttoright)
            {
                if (temp->left)
                {
                    nextlvl.push(temp->left);
                }
                if (temp->right)
                {
                    nextlvl.push(temp->right);
                }
            }
            else{
                if (temp->right)
                {
                    nextlvl.push(temp->right);
                }
                if (temp->left)
                {
                    nextlvl.push(temp->left);
                }
            }
        }
        if (currlvl.empty())
        {
            lefttoright = !lefttoright;
            swap(currlvl,nextlvl);
        }   
    }
}
  
/*
              5
             /  \
            1    7
             \
              3
             / \
            2   4
*/
int main()
{
    Node *root = NULL;
    root = insertbst(root, 5);
    insertbst(root, 1);
    insertbst(root, 3);
    insertbst(root, 4);
    insertbst(root, 2);
    insertbst(root, 7);

    inorder(root);
    cout << endl;
    // if (searchinbst(root,10) == NULL){
    // cout<<"key doesn't exist"<<endl;}
    // else
    // {cout<<"key exist"<<endl;}

    // root = deleteinbst(root,3);
    // inorder(root);

    // int preorder[] = {10,2,1,13,11};
    // int n = 5;
    // int preorderidx = 0;
    // Node* root1 = constructbst(preorder,&preorderidx,preorder[0],INT_MIN,INT_MAX,n);
    // inorder(root1);

    if (isbst(root, NULL, NULL))
    {
        cout << "valid bst" << endl;
    }
    else
    {
        cout << "not valid bst" << endl;
    }

    int arr[] = {10, 20, 30, 40, 50};
    Node *root2 = sortedarraytobst(arr, 0, 4);
    inorder(root2);
    cout << endl;

    vector<Node *> totaltrees = constructtrees(1, 3);
    for (int i = 0; i < totaltrees.size(); i++)
    {
        cout << (i + 1) << " : ";
        preorder(totaltrees[i]);
        cout << endl;
    }
    zigzagtraverse(root);
    cout<<endl;

    return 0;
}