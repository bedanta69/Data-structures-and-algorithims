// Linear Search (also called sequential search) is a simple searching algorithm used to find a particular value in a list or array by checking each element one by one from the beginning to the end.
#include <iostream>
using namespace std;
int linearsearch(int arr[], int siz, int target)
{
    for (int i = 0; i < siz; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int target = 6;
    int size = sizeof(array) / sizeof(int);
    cout << linearsearch(array, size, target) << endl;

    return 0;
}