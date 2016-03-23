class Solution {
public:
    int helper(vector<int>& nums, int left, int right) {
        while(left < right) {  // at least 2 elements
            int mid = (left + right + 1)/2;  // <== mid = left + (right-left+1)/2;
            if(nums[mid] - nums[left] == mid - left)
                left = mid;
            else
                right = mid - 1; // right should be kept the same meaning
        }
        return left;
    }
    
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(nums.size() == 0) return res;
    
        int i,j=0;
        for(i=0; i<nums.size(); i = j + 1) {
            j = helper(nums, i, nums.size()-1);
            if(i != j)
                res.push_back(to_string(nums[i]) + "->" + to_string(nums[j]));
            else
                res.push_back(to_string(nums[i]));
        }
    
        return res;
    }

};