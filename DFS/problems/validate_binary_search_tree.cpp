#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 98. Validate Binary Search Tree
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
        bool hleper(TreeNode* root, long min, long max){
            if(!root) return true;
            if(root->val <= min) return false;
            if(root->val >=max ) return false;
            return hleper(root->left, min, root->val) && hleper(root->right, root->val, max);
        }
         bool isValidBST(TreeNode* root) {
          return hleper(root, LONG_MIN, LONG_MAX);
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
            cout<<isValidBST(root)<<endl;
}