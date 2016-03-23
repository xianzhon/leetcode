class Solution {
public:
    //TLE
    int minSubArrayLen(int s, vector<int>& nums) {
        int i, j, n = nums.size(), minLen = n;
        vector<int> accum(n+1, 0);

        for(i=0; i<n; i++) {
            accum[i+1] = accum[i] + nums[i];
        }
        if(accum[n] < s) return 0;

        for(i=0; i<n; i++) {
            for(j=i+1; j<=n; j++) {
                if(accum[j] - accum[i] >= s) {
                    minLen = min(minLen, j-i+1);
                }
            }
        }
        return minLen;
    }
};
