//Link to the problem: https://leetcode.com/problems/climbing-stairs

//Solution:-Top Down Approch

class Solution {
public:
    
   int dp[100005];
    int fun(int n)
    {
        if(n<=1)
            return 1;
        
        if(dp[n]!=-1)
            return dp[n];
        
        return dp[n]=fun(n-1)+fun(n-2);
    }
    int climbStairs(int n) {
        if(n<=1)
            return 1;
        
        for(int i=0;i<=n;i++)
        {
            dp[i]=-1;
        }
        dp[0]=1;
        dp[1]=1;
        return fun(n);
        
        
        
        
    }
};

//Solution: BottomUp Approch

class Solution {
public:
    int climbStairs(int n) {
        int dp[n+1];
        dp[0]=1;
        dp[1]=1;
        for(int i=2; i<=n; i++)
            dp[i]=dp[i-1]+dp[i-2];
        
        return dp[n];
    }
    
};
