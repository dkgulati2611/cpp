#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define en '\n' 
#define pi (3.141592653589)
#define mod 1e9+7
#define ll long long
#define vi vector<int>
#define db double
#define pb push_back
#define all(c) c.begin(), c.end()
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(j,i,n) for(int j = i;j<n;j++)
struct node
{
    int data;
    struct node* left;
    struct node*right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void inorder(node* root){
    if (root == NULL){
        return;}
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int height(node* root){
    if (root == NULL){
        return 0;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);
    return max(lheight,rheight)+ 1;
}
bool isBalanced(node* root){
    if(root == NULL)    return true;
    if(!isBalanced(root->left)) return false;
    if(!isBalanced(root->right))    return false;
    int lheight = height(root->left);
    int rheight = height(root->right);
    if(abs(lheight-rheight)<=1) return true;
    return false;
}
bool isbalanced(node* root,int* h){
    if(root == NULL)    return true;
    int lh = 0,rh = 0;
    if(!isbalanced(root->left, &lh)) return false;
    if(!isbalanced(root->right, &rh))    return false;
    *h = max(lh,rh)+1;
    if(abs(lh-rh)<=1) return true;
    return false;
}
int main()
{
    
    return 0;
}