//Link to the problem: https://leetcode.com/problems/house-robber

//Solution: Using Top Down Approch
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

//Solution: Bottom Up Approch

class Solution {
public:
   
    int rob(vector<int>& nums) {
       int n=nums.size();
        if(n==0)
        return 0;
        int dp[n][2];
        dp[0][0]=0;
        dp[0][1]=nums[0];
        for(int i=1; i<n; i++)
        {
            dp[i][0]=max(dp[i-1][0], dp[i-1][1]);
            dp[i][1]=dp[i-1][0]+nums[i];
        }
        return max(dp[n-1][0], dp[n-1][1]);
    }
};
