// Reverse an array without making a second array
// 2 pointer approach
#include <iostream>
using namespace std;
void reverse_array(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(int);
    reverse_array(array, size);
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}