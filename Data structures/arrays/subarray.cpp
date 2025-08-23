// a subarray is a continuous part of a array
// if an array has n elements then total no of subarray of that array is n*(n+1)/2
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}

// this is the brute force method to print all the subarrays