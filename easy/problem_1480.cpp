class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (size_t i = 1; i < nums.size(); ++i)
        {
            nums[i] += nums[i - 1];
        }

        return nums;
    }
};