#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
// 102. Binary Tree Level Order Traversal
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        left = nullptr;
        right = nullptr;
    }
};
vector<vector<int>> levelOrder(TreeNode *root)
{
    if(!root) return{};
    vector<vector<int>> vec ;
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty())
    {
        int s = q.size();
        vector<int> temp;
        for(int i = 0 ; i< s; ++i){
            TreeNode* cur = q.front();
            q.pop();
            temp.push_back(cur->val);
            if(cur->left)q.push(cur->left);
            if(cur->right) q.push(cur->right);
        }
        vec.push_back(temp);
    }
    return vec;
    
}
int main()
{
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    vector<vector<int>> vec = levelOrder(root);
    for (auto x : vec)
    {
        for (auto y : x)
        {
            cout << y;
        }
        cout << "" << endl;
    }
}