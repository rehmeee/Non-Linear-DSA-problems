#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
    // 104. Maximum Depth of Binary Tree
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
         int maxDepth(TreeNode* root) {
            if(!root) return 0;
            int l = maxDepth(root->left);
            int r = maxDepth(root->right);
            return 1+ max(l,r);
            
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
        cout<<maxDepth(root)<<endl;
}