#include <bits/stdc++.h>
using namespace std;
// 222. Count Complete Tree Nodes
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
     int countNodes(TreeNode* root) {
        if(!root) return 0;
        int left = countNodes(root->left);
        int right = countNodes(root->right);
        return  1 +left+right;

    }
int main(){
        TreeNode *root = new TreeNode(1);
        root->left = new TreeNode(2);
        root->right = new TreeNode(3);
        root->left->left = new TreeNode(4);
        root->left->right = new TreeNode(5);
        root->right->left = new TreeNode(6);
        cout<<countNodes(root)<<endl;	
}