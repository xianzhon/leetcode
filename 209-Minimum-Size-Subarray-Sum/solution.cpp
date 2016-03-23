class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        if(nums.empty()) return 0;
        
        int n = nums.size();
        int curSum = nums[0], res = INT_MAX, i=0, j=0;
        while(j < n) { //[i,j]
            if(curSum < s) {
                curSum += nums[++j];
            } else {
                res = min(res, j-i+1);
                curSum -= nums[i++];
            }
        }
        if(i==0 && curSum < s)
            return 0;
        return res;
    }
};