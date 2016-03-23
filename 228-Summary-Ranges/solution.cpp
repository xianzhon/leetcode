class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(nums.size() == 0) return res;
        
        int cnt = 1, i;
        string cur = "" + to_string(nums[0]);
        for(i=1; i<nums.size(); i++) {
            if(nums[i] == nums[i-1] + 1) {
                cnt++;
            } else {
                if(cnt != 1) {
                   cur += "->" + to_string(nums[i-1]);
                }
                res.push_back(cur);
                
                cur = "" + to_string(nums[i]);
                cnt = 1;
            }
        }
        if(cnt != 1) {
            cur += "->" + to_string(nums[i-1]);
        }
        res.push_back(cur);
        return res;
    }
};