//Problem: https://leetcode.com/problems/score-after-flipping-matrix

//Solution:
class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {
     int n,m;
    n=A.size();
    if(n==0)
    return 0;
    m=A[0].size();
    int i,j;
    for(int i=0; i<n; i++)
    {
	    if(A[i][0]==0)
	    {
		    for(j=0; j<m; j++)
		    A[i][j]=1-A[i][j];
	    }
    }
    for(j=1; j<m; j++)
    {
	    int c1=0, c2=0;
	    for(i=0; i<n;i++)
	    {
		if(A[i][j]==0)
		c1++;
		else
		c2++;
	    }
	    if(c1>c2)
	    {
	    for(i=0; i<n; i++)
	    A[i][j]=1-A[i][j];
	    }
    }

    int ans=0;
    for(int i=0; i<n; i++)
    {
	    int num=0;
	    for(j=0; j<m; j++)
	    num=num*2+A[i][j];
	    ans+=num;
    }
    return ans;           

    }
};
