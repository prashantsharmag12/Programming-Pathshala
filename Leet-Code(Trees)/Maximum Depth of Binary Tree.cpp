//Link to Problem:https://leetcode.com/problems/sum-root-to-leaf-numbers

//Solution:
int maxDepth(TreeNode* root) {
        int l=0,r=0;
        if(root==NULL)
            return 0;
        else
        {
            int l=maxDepth(root->left);
            int r=maxDepth(root->right); 
        
            return max(l,r)+1; 
        }
        
    }
