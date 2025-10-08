#include <bits/stdc++.h>
using namespace std;
// 113. Path Sum II
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
    vector<vector<int>> helper(TreeNode* root, int targetSum){
        if(!root) return {};
        targetSum -= root->val;
        if(!root->left && !root->right && targetSum ==0){
            return {{root->val}};
        }
        auto vec = helper(root->left, targetSum);
        auto vec2 = helper(root->right , targetSum);
        vector<vector<int>> res;
        if(vec.size()>0){
            for(auto x: vec){
                x.push_back(root->val);
                res.push_back(x);
            }
        } 
        if(vec2.size()>0){
             for(auto x: vec2){
                x.push_back(root->val);
                res.push_back(x);
            }
        }
        return res;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       
        vector<vector<int>> res = helper(root, targetSum);
        for(auto &x: res){
            reverse(x.begin(), x.end());
        }
        return res;

        
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
            root->right->right->left = new TreeNode(5);
            root->left->left->left = new TreeNode(7);
            root->left->left->right = new TreeNode(2);
            vector<vector<int>> vec = pathSum(root, 22);
            for(auto x: vec){
                for(auto y: x){
                cout<<y;
                }
                cout<<endl;
            }
}