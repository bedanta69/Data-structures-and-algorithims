// leetcode problem:53
// brute force approach
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = sizeof(arr) / sizeof(int);
    int max_sum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int current_sum = 0;
        for (int end = st; end < n; end++)
        {
            current_sum += arr[end];
            max_sum = max(max_sum, current_sum);
        }
    }

       return max_sum;
}
