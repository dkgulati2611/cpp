#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
struct info
{
    int size;
    int max;
    int min;
    int ans;
    bool isbst;
};
info largestbstinbt(Node *root)
{
    if (root == NULL)
    {
        return {0, INT_MIN, INT_MAX, 0, true};
    }
    if (root->left == NULL && root->right == NULL)
    {
        return {1, root->data, root->data, 1, true};
    }

    info leftinfo = largestbstinbt(root->left);
    info rightinfo = largestbstinbt(root->right);

    info curr;
    curr.size = (1 + leftinfo.size + rightinfo.size);

    if (leftinfo.isbst && rightinfo.isbst && leftinfo.max < root->data && rightinfo.min > root->data)
    {
        curr.min = min(leftinfo.min, min(rightinfo.min, root->data));
        curr.max = max(leftinfo.max, max(rightinfo.max, root->data));

        curr.ans = curr.size;
        curr.isbst = true;
        return curr;
    }
    curr.ans = max(leftinfo.ans, rightinfo.ans);
    curr.isbst = false;
    return curr;
}
int main()
{
    Node *root = new Node(15);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(12);
    cout << "largest BST in BT : " << largestbstinbt(root).ans<<endl;
    return 0;
}