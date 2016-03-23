##Solution 1
经典的DP问题，求最长递增子序列的长度。

dp[i] 表示以a[i]结尾的从a[0]...a[i]的最长递增子序列的长度。

`dp[i] = max(dp[j]+1, 1) for each j s.t. a[j] < a[i] and 0<= j <i`

result = max(dp[i]), i=0,...,n-1

Time: O(n<sup>2</sup>)  Space: O(n)

## Solution 2
维护一个数组b，初始为空，用来保存当前找到的最长序列，注意，为了能找到最长的序列，要求里面的每个数都是精挑细选的，即找最小的。

做法：遍历原来的数组a，当前值val如果大于b的最大值，那就把它加到数组b的末尾。最后b的长度就是所求答案。 (很巧妙!)

Time: O(nlog(n)) Space: O(n)