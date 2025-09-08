// pairsum problem with better approach
// 2 pointer approach(optimised solution)
#include <iostream>
#include <vector>
using namespace std;
vector<int> pairsum(vector<int> nums, int target)
{
    int i = 0;
    int j = nums.size() - 1;
    while (i < j)
    {
        vector<int> ans;
        if (nums[i] + nums[j] > target)
        {
            j--;
        }
        else if (nums[i] + nums[j] < target)
        {
            i++;
        }
        else
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;
        }
    }
    return {};
}
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = pairsum(nums, target);
    cout << ans[0] << " , " << ans[1] << endl;
    return 0;
}