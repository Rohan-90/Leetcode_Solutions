class Solution {
public:
 int spaceOptimization(int n){
        int prev1 = 1;
        if(n == 0) return 1;
        int prev2 = 1;
        if(n == 1) return 1;
       int curr;
        for(int i = 2; i <= n; i++){
            curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return curr;   
    }

    int bottomUp(int n){
        vector<int> dp(n+1,-1);
        dp[0] = 1;
        if(n == 0) return dp[1];
        dp[1] = 1;
        if(n == 1) return dp[1];
       
        for(int i = 2; i <= n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
    int dpsol(vector<int> &dp, int n){
        if(n==1 || n==0) return 1;
        if(dp[n] != -1) return dp[n];
        dp[n] = dpsol(dp,n-1) + dpsol(dp,n-2);
        return dp[n];
    }
    int climbStairs(int n) {
      //  vector<int>dp(n+1,-1);
      //  return bottomUp(n);
      return spaceOptimization(n);
    }
};