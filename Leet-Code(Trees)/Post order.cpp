//Problem Link: https://leetcode.com/problems/binary-tree-postorder-traversal

//Solution
class Solution {
public:
     vector<int> smile;
    void postorder(TreeNode* root)
    {
        if(root==NULL)
        return;
        
        postorder(root->left);
        postorder(root->right);
        smile.push_back(root->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        
        postorder(root);
        return smile;
    }
    
};
