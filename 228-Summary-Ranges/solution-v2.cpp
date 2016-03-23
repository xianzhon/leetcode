class Solution {
public:
    int helper(vector<int>& nums, int left, int right) {
        int mid = 0;
        while(left + 1 < right) {
            mid = (left + right)/2;
            if(nums[mid] - nums[left] == mid - left)
                left = mid;
            else
                right = mid;
        }
        return left;
    }
    
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(nums.size() == 0) return res;
    
        int i,j=0;
        for(i=0; i<nums.size(); i = j + 1) {
            j = helper(nums, i, nums.size());
            if(i != j)
                res.push_back(to_string(nums[i]) + "->" + to_string(nums[j]));
            else
                res.push_back(to_string(nums[i]));
        }
    
        return res;
    }

};