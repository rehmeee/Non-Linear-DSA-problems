#include <bits/stdc++.h>
using namespace std;
// 404. Sum of Left Leaves
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
int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0;
        int sum = 0;
        if(root->left && !root->left->left && !root->left->right){
            sum = root->left->val;
        }
         return sum + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
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
            cout<<sumOfLeftLeaves(root)<<endl;
}