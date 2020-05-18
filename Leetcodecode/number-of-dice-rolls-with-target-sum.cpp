
/*
Top-down DP
*/
int dp[31][1001] = {};
int numRollsToTarget(int d, int f, int target, int res = 0) {
  if (d == 0 || target <= 0) return d == target;
  if (dp[d][target]) return dp[d][target] - 1;
  for (auto i = 1; i <= f; ++i)
    res = (res + numRollsToTarget(d - 1, f, target - i)) % 1000000007;
  dp[d][target] = res + 1;
  return res;
}
/*
Complexity Analysis
Runtime: O(d * f * target).
Memory: O(d * target) for the memoisation.
*/


/*
Bottom-Up DP
 */
int numRollsToTarget(int d, int f, int target) {
  vector<int> dp(target + 1);
  dp[0] = 1;
  for (int i = 1; i <= d; ++i) {
    vector<int> dp1(target + 1);
    for (int j = 1; j <= f; ++j)
      for (auto k = j; k <= target; ++k)
        dp1[k] = (dp1[k] + dp[k - j]) % 1000000007;
    swap(dp, dp1);
  }
  return dp[target];
}
/* 
Complexity Analysis
Runtime: O(d * f * target).
Memory: O(target) as we only store counts for the last dice.
 */

/**
 * Optimization  
 */
int numRollsToTarget(int d, int f, int target) {
  int dp[target + 1] = { 1 }, i, j, k;
  for (i = 1; i <= d; ++i)
    for (k = target; k >= (i == d ? target : 0); --k)
      for (j = k - 1, dp[k] = 0; j >= max(0, k - f); --j)
        dp[k] = (dp[k] + dp[j]) % 1000000007;
  return dp[target];
}
/**
 *  Just change that you have to stop at dp[target]
**/


/**
 * my code
  */
for(int i=1;i<=d;i++) 
{
    for(int j=1;j<=f;j++)
    {
        for(int k=1;k<=target;k++)
        {
            if(i==1 && k-j==0)dp[1][j]=1;
            else if(k-j>0)
            {dp[i][k]+=dp[i-1][k-j];
                    dp[i][k]%=mod;}
        }
    }
}