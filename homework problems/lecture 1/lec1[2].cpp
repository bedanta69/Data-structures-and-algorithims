// write a function to swap the maximum and minimum numbers of an array
#include <iostream>
using namespace std;
void swapnum(int arr[], int size)
{
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int si;
    int li;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == smallest)
        {
            si = i;
        }
        if (arr[i] == largest)
        {
            li = i;
        }
    }
    swap(arr[si], arr[li]);
}
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(int);
    swapnum(array, size);
    for(int i =0;i<size;i++){
        cout<<array[i]<<" ";
    }

    return 0;
}