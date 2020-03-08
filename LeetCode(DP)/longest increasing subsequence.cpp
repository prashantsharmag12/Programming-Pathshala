//Problem: https://leetcode.com/problems/longest-increasing-subsequence

//Solution
class Solution {
public:
    int dp[100005];
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return 0;
        for(int i=0; i<n; i++)
        dp[i]=1;
        int i,j;
        
        for(i=1; i<n; i++)
            for(j=0; j<i; j++)
            {
                if(nums[i]>nums[j])
                    dp[i]=max(dp[i], dp[j]+1);
            }
        int max=*max_element(dp, dp+n);
        return max;
    }
        
};
