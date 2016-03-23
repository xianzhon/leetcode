class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        if(nums.empty()) return 0;
        
        int curSum = 0, res = INT_MAX, start=0, end=0;
        while(end < nums.size()) { //[start,end]
            curSum += nums[end];
            while(curSum >= s) {
                res = min(res, end - start + 1);
                curSum -= nums[start++];
            }
            end++;
        }
        if(start==0 && curSum < s) //or: res == INT_MAX
            return 0;
        return res;
    }
};