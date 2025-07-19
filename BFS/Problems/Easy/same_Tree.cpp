bool isSameTree(TreeNode* p, TreeNode* q) {
          if(!p &&  !q) return true;
        if(!p || !q) return false;
        queue<TreeNode*> q1;
        queue<TreeNode*> q2;
        TreeNode* cur1 = p;
        TreeNode* cur2 = q;
…            if(cur1->left) q1.push(cur1->left);
            if(cur1->right) q1.push(cur1->right);
            if(cur2->left) q2.push(cur2->left);
            if(cur2->right) q2.push(cur2->right);


            
        }
        return true;
    }