// Moore's vooting algorithim
// Moore’s Voting Algorithm is used to find the majority element in an array — that is, an element that appears more than n/2 times, where n is the size of the array.
#include <iostream>
#include <vector>
using namespace std;

int findMajorityElement(const vector<int> &nums)
{
    int candidate = -1;
    int count = 0;

    // Phase 1: Find a candidate
    for (int num : nums)
    {
        if (count == 0)
        {
            candidate = num;
            count = 1;
        }
        else if (num == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // Phase 2: Verify the candidate
    count = 0;
    for (int num : nums)
    {
        if (num == candidate)
            count++;
    }

    if (count > nums.size() / 2)
    {
        return candidate;
    }
    else
    {
        return -1; // No majority element
    }
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int majority = findMajorityElement(arr);

    if (majority != -1)
        cout << "Majority Element: " << majority << endl;
    else
        cout << "No Majority Element found." << endl;

    return 0;
}
