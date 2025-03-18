class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> rSum;

        rSum.push_back(nums[0]);

        size_t j = 0;
        for (size_t i = 1; i < nums.size(); ++i)
        {
            rSum.push_back(rSum[j] + nums[i]);
            ++j;
        }

        return rSum;
    }
};