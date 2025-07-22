#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
#include<queue>
#include<set>
using namespace std;
// 116. Populating Next Right Pointers in Each Node
        class TreeNode{
        public:
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode* next;
        TreeNode(int val){
        this->val = val;
        left = nullptr;
        right = nullptr;
        next = nullptr;
        }
        };	
        TreeNode* connect(TreeNode* root) {
        if(!root) return root;
        queue<TreeNode*> qu;
        qu.push(root);
        TreeNode* cur1;

        while (!qu.empty())
        {
            int s = qu.size();
            for(int i = 0 ; i < s ; ++i){
                cur1 = qu.front();
                qu.pop();
                if(i<s-1){
                    cur1->next = qu.front();
                }
                if(cur1->left) qu.push(cur1->left);
                if(cur1->right) qu.push(cur1->right);
            }
        }
        return root;
        
        
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