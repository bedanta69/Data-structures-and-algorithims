// write a function to calculate sum and product of all numbers in an array
#include <iostream>
using namespace std;
void calculate(int arr[], int size)
{
    int sum = 0;
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        product = product * arr[i];
    }
    cout << "The sum of all the elements in the array is:" << sum << endl;
    cout << "The product of all the elements in the array is" << product << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    calculate(arr, size);
    return 0;
}