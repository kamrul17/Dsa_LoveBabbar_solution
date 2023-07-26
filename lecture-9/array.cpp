#include <iostream>
using namespace std;
int sortArr(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        while (arr[left] == 0)
        {
            left++;
        }
        while (arr[right] == 0)
        {
            right++;
        }
        while (arr[left] == 1 && arr[right] == 0)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[8] = {1, 0, 1, 0, 1, 1, 0, 1};
    sortArr(arr, 8);
    printArr(arr, 8);
    return 0;
}