//Link to the problem: https://leetcode.com/problems/binary-tree-level-order-traversal

//Solution
class Solution {
public:
    vector<vector<int>> level(TreeNode* root)
{
	vector<vector<int>>ans;
	if(root==NULL)
	return ans;
	queue<pair<TreeNode*,int>> pq;
	pq.push({root,0});
	
	vector<int>v[100004];
	int c=0;
	while(pq.size()){
		pair<TreeNode*, int>pp;
		pp=pq.front();
		TreeNode* temp;
		temp=pp.first;
		pq.pop();
		int level=pp.second;
		c=max(level,c);
		v[level].push_back(temp->val);
		if(temp->left)
		pq.push({temp->left,level+1});
		if(temp->right)
		pq.push({temp->right, level+1});
	}
	for(int i=0; i<=c; i++)
	ans.push_back(v[i]);
	
	return ans;
}
    vector<vector<int>> levelOrder(TreeNode* root) {
        return level(root);
    }
};
