// write a function to print all unique values in an array
#include <iostream>
using namespace std;
void print_unique_values(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }
}
int main()
{
    int array[] = {1, 2, 1, 2, 1, 1, 3, 1, 7, 8};
    int size = sizeof(array) / sizeof(int);
    print_unique_values(array, size);
    return 0;
}