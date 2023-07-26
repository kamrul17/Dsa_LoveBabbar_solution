// CPP program to find the only element that
// appears b times
#include <bits/stdc++.h>
using namespace std;

int appearsbTimes(int arr[], int n, int a, int b)
{
    unordered_set<int> s;

    int a_sum = 0, sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i]) == s.end())
        {
            s.insert(arr[i]);
            a_sum += arr[i];
        }

        sum += arr[i];
    }

    a_sum = a * a_sum;

    return ((a_sum - sum) / (a - b));
}

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 3, 3};
    int a = 3, b = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << appearsbTimes(arr, n, a, b);
    return 0;
}
