// Maximum Subarray SUM
// Given an integer array nums, find the subarray with the largest sum, and return its sum.
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int c_sum = 0;
        int max_sum = INT_MIN;
        for (int i : nums)
        {
            c_sum += i;
            max_sum = max(c_sum, max_sum);
            if (c_sum < 0)
            {
                c_sum = 0;
            }
        }
        return max_sum;
    }
};