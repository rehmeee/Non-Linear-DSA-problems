#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 110. Balanced Binary Tree
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
         int helper(TreeNode* node){
        if(node==NULL) return 0;
        return max(helper(node->left),helper(node->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;

        int l=helper(root->left);
        int r=helper(root->right);
        
        if(abs(l-r)<=1 && isBalanced(root->left) && isBalanced(root->right)) return true;
        return false;
    }
int main(){
        TreeNode *root = new TreeNode(1);
        root->left = new TreeNode(2);
        root->left->right = new TreeNode(3);
        root->right  = new TreeNode(2);
        root->left->left = new TreeNode(3);
        root->left->right = new TreeNode(3);
        root->left->left->left = new TreeNode(4);
        root->left->left->right = new TreeNode(4);
       cout<<isBalanced(root)<<endl;
}