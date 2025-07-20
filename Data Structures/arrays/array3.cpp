// problem1:finding the samllest and largest number in an array
#include <iostream>
using namespace std;
int main()
{
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = sizeof(nums) / sizeof(int);
    int smallest = INT_MAX;
    int Largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        smallest = min(nums[i], smallest); // same meaning as:  if (nums[i] < smallest){
        Largest = max(nums[i], Largest);   //                     smallest = nums[i]
                                           //                   }
    }
    cout << "The smallest element in the array is:" << smallest << endl;
    cout << "The largest element in the array is:" << Largest << endl;

    return 0;
}