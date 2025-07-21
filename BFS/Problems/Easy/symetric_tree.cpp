#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<queue>
#include<stack>
using namespace std;
// 101. Symmetric Tree
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
    bool isSymmetric(TreeNode* root) {
        if(!root->left && !root->right) return true;
        if(!root->left || !root->right) return false;
        queue<TreeNode*> leftQ;
        queue<TreeNode*> rightQ;
        TreeNode* curl = nullptr;
        TreeNode* curr = nullptr;
        leftQ.push(root->left);
        rightQ.push(root->right);
        while (!leftQ.empty() && !rightQ.empty())
        {
            curl = leftQ.front();
            curr = rightQ.front();
            if(curl->val != curr->val) return false;
            if((!curl->left && curr->right) || (curl->left && !curr->right) || (!curr->left && curl->right) || (curr->left && !curl->right) ) return false;

            leftQ.pop();
            rightQ.pop();
            if(curl->right) leftQ.push(curl->right);
            if(curl->left) leftQ.push(curl->left);
            if(curr->left) rightQ.push(curr->left);
            if(curr->right) rightQ.push(curr->right);

        }
        return true;
        

        
        
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
        	
}