#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
        class TreeNode{
        public:
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int val){
        this->val = val;
        left = nullptr;
        right = nullptr;
        }
        };	
        bool findValue(TreeNode* root, int value){
            if(!root) return false;
            return root->val == value || findValue(root->left, value) || findValue(root->right, value);

        }
int main(){
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
        cout<<findValue(root, 6)<<endl;
}