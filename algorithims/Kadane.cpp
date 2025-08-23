// Kadane’s Algorithm is a famous dynamic programming approach used to find the maximum sum of a contiguous subarray within a one-dimensional array of numbers.
// At each element, we decide:
// Either extend the previous subarray by including the current element.
// Or start a new subarray from the current element.
#include <iostream>
using namespace std;
int kadane(int arr[], int size)
{
    int max_sum = INT_MIN;
    int current_sum = 0;
    for (int i = 0; i < size; i++)
    {
        current_sum += arr[i];
        max_sum = max(max_sum, current_sum);
        if (current_sum < 0)
        {
            current_sum = 0;
        }
    }
    return max_sum;
}
int main()
{
    int arr1[] = {1, 2, 3, 4, -5};
    int size = sizeof(arr1) / sizeof(int);
    cout << kadane(arr1, size) << endl;
}