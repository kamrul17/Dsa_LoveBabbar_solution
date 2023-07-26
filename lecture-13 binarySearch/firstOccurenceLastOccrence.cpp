#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key)
{
    int ans = 0;
    int s = 0;
    int e = n - 1;
    int mid = (s + (e - s / 2));
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + (e - s / 2));
    }
    return ans;
}
int lastOccurence(int arr[], int n, int key)
{
    int ans = 0;
    int s = 0;
    int e = n - 1;
    int mid = (s + (e - s / 2));
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + (e - s / 2));
    }
    return ans;
}
int main()
{
    int arr[5] = {1, 2, 4, 4, 4};
    int key = 4;
    int firstIndex = firstOccurence(arr, 5, 4);
    int lastIndex = lastOccurence(arr, 5, 4);
    cout << "first occurence of 4 is at index " << firstIndex << endl;
    cout << "last occurence of 4 is at index " << lastIndex << endl;
    return 0;
}