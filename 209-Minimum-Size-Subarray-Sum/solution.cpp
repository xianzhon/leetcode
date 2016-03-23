class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int n = nums.size();
        if(!n) return 0;
        
        int curSum = nums[0], res = n, i=0, j=0;
        while(i <= j && j < nums.size()) { //[i,j]
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