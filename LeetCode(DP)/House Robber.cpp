//Link to the problem: https://leetcode.com/problems/house-robber

//Solution:
class Solution {
public:
    int dp[100005];
    int fun(vector<int>& nums, int pos, int n){
        if(pos>=n)
            return 0;
        if(dp[pos]!=-1)
            return dp[pos];
        dp[pos]=max(fun(nums,pos+1,n),nums[pos]+fun(nums,pos+2,n));
        
        return dp[pos];
    }
    int rob(vector<int>& nums) {
        int n;
        n=nums.size();
        int i;
        for(i=0; i<=n; i++)
        {
            dp[i]=-1;
        }
        
        fun(nums,0,n);
        
        return max(dp[0],0);
    }
};
