//Problem Link: https://leetcode.com/problems/sum-root-to-leaf-numbers/

//Solution to the problem:
int sum(TreeNode* root, int prev)
    {
        if(!root)
        return 0;
        
    int num = prev * 10 + (root->val);
        
    if(!root->left && !root->right)
        return num;
    else
        return sum(root->left, num) + sum(root->right, num);
    }
    int sumNumbers(TreeNode* root) {
      return sum(root, 0);  
    }
};
