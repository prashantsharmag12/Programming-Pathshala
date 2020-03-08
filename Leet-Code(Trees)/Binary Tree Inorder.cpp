//Problem Statement: https://leetcode.com/problems/binary-tree-inorder-traversal

//Solutionclass Solution {
    
public:
    vector<int> smile;
    void inorder(TreeNode* root)
    {
        if(root==NULL)
        return;
        inorder(root->left);
        smile.push_back(root->val);
        inorder(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        
        inorder(root);
        return smile;
    }
};
