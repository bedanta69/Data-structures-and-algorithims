// Leetcode 169
// Brute force approach O(n^2)
class solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        for (val : nums)
        {
            int freq = 0;
            for (el : nums)
            {
                if (el == val)
                {
                    freq++;
                }
            }
            if (freq > n / 2)
            {
                return val;
            }
        }
    }
};