#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
// 111. Minimum Depth of Binary Tree
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
        int minDepth(TreeNode* root) {
            if(!root) return 0;
            if(!root->left && !root->right) return 1;
            queue<TreeNode*> qu;
            qu.push(root);
            int level = 1;
            TreeNode* cur = nullptr;
            while (!qu.empty())
            {
                int s = qu.size();
                for(int i = 0; i<s; ++i){
                    cur = qu.front();
                    qu.pop();
                    if(!cur->left && !cur->right) return level;
                    if(cur->left) qu.push(cur->left);
                    if(cur->right) qu.push(cur->right);
                    
                }
                ++level;


            }
            return 0;
            

        
    }
int main(){
        	TreeNode *root = new TreeNode(1);
            root->left = new TreeNode(2);
            root->right = new TreeNode(3);
            root->left->left = new TreeNode(4);
            root->left->right = new TreeNode(5);
            root->right->left = new TreeNode(6);
            cout<<minDepth(root)<<endl;
            
}