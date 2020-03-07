//Problem Statement:https://leetcode.com/problems/binary-tree-preorder-traversal

//Solution
class Solution {
public:
    vector<int> smile;
    void preorder(TreeNode* root)
    {
        if(root==NULL)
        return;
        smile.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        
        preorder(root);
        return smile;
    }
    
};
