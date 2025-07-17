#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
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
        void levelOrder(TreeNode* root){
                if(!root) return ;
                queue<TreeNode*> q;
                q.push(root);
                while (!q.empty())
                {
                        TreeNode* cur = q.front();
                        q.pop();
                        cout<<cur->val<<endl;
                        if(cur->left) q.push(cur->left);
                        if(cur->right) q.push(cur->right);
                }
                

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
            levelOrder(root);
}