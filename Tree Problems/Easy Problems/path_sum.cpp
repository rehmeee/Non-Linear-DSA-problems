#include <bits/stdc++.h>
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
  bool hasPathSum(TreeNode* root, int targetSum) {
         if(!root) return false;
        if(!root->left && !root->right){
            return targetSum - root->val == 0;
        }
        targetSum -= root->val;
        return hasPathSum(root->left , targetSum) || hasPathSum(root->right , targetSum);

    }

int main(){
        	TreeNode *root = new TreeNode(5);
            root->left = new TreeNode(4);
            root->right = new TreeNode(8);
            root->left->left = new TreeNode(11);
            root->left->right = new TreeNode(5);
            root->right->left = new TreeNode(13);
            root->right->right = new TreeNode(4);
            root->right->right->right  = new TreeNode(1);
            root->left->left->left = new TreeNode(7);
            root->left->left->right = new TreeNode(2);
            cout<<hasPathSum(root, 5)<<endl;
}