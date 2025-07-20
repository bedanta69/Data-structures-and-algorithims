// HW problem: find the index of the arary storing the largest and the smallest element:
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 15, 22, 1, -15, 24};
    int size = sizeof(arr) / sizeof(int);
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        largest = max(arr[i], largest);
        smallest = min(arr[i], smallest);
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == largest)
        {
            cout << "The index storing the largest number is:" << i << endl;
        }
        if (arr[i] == smallest)
        {
            cout << "the index storing the smallest number is:" << i << endl;
        }
    }
    return 0;
}