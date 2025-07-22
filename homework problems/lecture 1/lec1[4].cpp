// Write a function to print intersection of two arrays
#include <iostream>
using namespace std;
void intersection(int arr1[], int arr2[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        int count = 0;
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                count++;
            }
        }
        if (count >= 1)
        {
            cout << arr1[i] << " ";
        }
    }
}
int main()
{
    int array1[] = {1, 2, 3, 4, 5, 6};
    int array2[] = {4, 4, 5, 6, 7, 8};
    int size1 = sizeof(array1) / sizeof(int);
    int size2 = sizeof(array2) / sizeof(int);
    intersection(array1, array2, size1, size2);
    return 0;
}