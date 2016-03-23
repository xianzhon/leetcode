##Solution 1
经典的DP问题，求最长递增子序列的长度。

dp[i] 表示以a[i]结尾的从a[0]...a[i]的最长递增子序列的长度。

`dp[i] = max(dp[j]+1, 1) for each j s.t. a[j] < a[i] and 0<= j <i`

result = max(dp[i]), i=0,...,n-1

Time: O(n<sup>2</sup>)  Space: O(n)