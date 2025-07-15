#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        left = nullptr;
        right = nullptr;
    }
};  


    // pre order traversal
    // void printTree(TreeNode* root){
    //     if(!root) return;
    //     cout<<root->val<<endl;
    //     printTree(root->left);
    //     printTree(root->right);
    // }
    // post order traversal
    void printTree(TreeNode* root){
        if(!root) return;
        printTree(root->left);
        printTree(root->right);
        cout<<root->val<<endl;
    }
    // inorder traversal of trees
    void printTree(TreeNode* root){
        if(!root) return;
        printTree(root->left);
        cout<<root->val<<endl;
        printTree(root->right);
    }
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    root->left->left->left = new TreeNode(8);
    root->left->left->right = new TreeNode(9);

    root->left->left->right->right = new TreeNode(10);
    printTree(root);

}