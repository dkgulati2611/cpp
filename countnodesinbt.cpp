#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node*right;
    

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;

    }
}; 
int countnodes(Node* root){
    if (root == NULL)
    {
        return 0;
    }
    return countnodes(root->left) + countnodes(root->right) + 1;
    
}
int sumofnodes(Node* root){
    if (root == NULL)
    {
        return 0;
    }
    return sumofnodes(root->left) + sumofnodes(root->right) + root->data;
       
} 
void sumreplacement(Node* root){
    if (root == NULL)
    {
        return;
    }
    
    sumreplacement(root->left);
    sumreplacement(root->right);

    if (root->left != NULL)
    {
        root->data += root->left->data;
    }
    if (root->right != NULL)
    {
        root->data += root->right->data;
    }
}
void preorder(Node* root){
    if (root == NULL)
    {
        return;
    }
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int height(Node* root){
    if (root == NULL){
        return 0;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);
    return max(lheight,rheight)+ 1;
}
int diameter(Node* root){
    if (root == NULL)
    {
        return 0;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);
    int currdiamet = lheight + rheight +1;
    int ldiameter = diameter(root->left);
    int rdiameter = diameter(root->right);
    return max(currdiamet,max(ldiameter,rdiameter));
    
}
int calcdiameter(Node* root,int * height){
    if (root == NULL)
    {
        *height = 0;
        return 0;
    }
    
    int lh = 0,rh = 0;
    int ldiameter = calcdiameter(root->left,&lh);
    int rdiameter = calcdiameter(root->right, &rh);
    int currdiameter = lh+rh+1;
    *height = max(lh,rh) + 1;
    return max(currdiameter,max(ldiameter,rdiameter));
}

int main()
{
    struct Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<countnodes(root)<<endl;
    cout<<sumofnodes(root)<<endl;
    cout<<height(root)<<endl; 
    cout<<diameter(root)<<endl;
    int height = 0;
    cout<<calcdiameter(root,&height)<<endl;
    preorder(root);
    cout<<endl;
    sumreplacement(root);
    preorder(root);
    return 0;
}