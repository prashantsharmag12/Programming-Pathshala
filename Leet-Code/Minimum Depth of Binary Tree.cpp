//Link to the problem: https://leetcode.com/problems/minimum-depth-of-binary-tree

//Solution:
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        int h=minDepth(root->left);
        int r=minDepth(root->right);
        
        if(r==0)
            return h+1;
        if(h==0)
            return r+1;
        return min(r,h)+1;
    }
