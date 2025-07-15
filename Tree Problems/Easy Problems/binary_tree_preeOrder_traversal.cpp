#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
// 144. Binary Tree Preorder Traversal
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
        void inorderTra(vector<int> & vec, TreeNode* root){
            if(!root) return;
            vec.push_back(root->val);
            inorderTra(vec, root->left);
            inorderTra(vec, root->right);
        }

         vector<int> preorderTraversal(TreeNode* root) {
            vector<int> vec;
            inorderTra(vec, root);
            return vec;
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
            vector<int> vec = preorderTraversal(root);
            for(auto x: vec){
            cout<<x<<endl;
            }
        }