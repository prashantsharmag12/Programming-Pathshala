//Link to the question: https://leetcode.com/problems/diameter-of-binary-tree/

//Solution:
int ans=0;
    int fun(TreeNode* root){
        if(root==NULL)
            return 0;
    if(root->left==NULL && root->right==NULL)
    {
        ans=max(1,ans);
        return 1;
    }
        
    int left=fun(root->left);
    int right=fun(root->right);
        
    ans=max(1+left+right, ans);
    return max(left,right)+1;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        ans=0;
        fun(root);
        return max(0,ans-1);
        return 0;
    }
    
