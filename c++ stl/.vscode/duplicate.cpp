// C++ program to find the only repeating
// element in an array where elements are
// from 1 to N-1.

#include <iostream>
#include <set>
using namespace std;

int findRepeating(int arr[], int N)
{
    set<int> s;
    for (int i = 0; i < N; i++)
    {
        if (s.find(arr[i]) != s.end())
            return arr[i];
        s.insert(arr[i]);
    }

    // If input is correct, we should
    // never reach here
    return -1;
}

// Driver's code
int main()
{
    int arr[] = {9, 2, 6, 1, 8, 5, 3, 4, 9, 7};
    int N = sizeof(arr) / sizeof(arr[0]);

    // Function call
    cout << findRepeating(arr, N);
    return 0;
}