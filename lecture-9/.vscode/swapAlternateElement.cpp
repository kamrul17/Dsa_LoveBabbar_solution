// swap Alternate Element
#include <iostream>
#include <stdio.h>
using namespace std;
void swapAlternateELement(int arr[], int n)
{
    int temp = 0;
    for (int i = 0; i < n; i += 2)
    {
        if ((i + 1) < n)
        {
            swap(arr[i], arr[i + 1]);
        }
        // temp = arr[i + 1];
        // arr[i + 1] = arr[i];
        // arr[i] = temp;
        // temp = arr[i];
        // arr[i] = arr[i + 1];
        // arr[i + 1] = temp;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int size;
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    swapAlternateELement(arr, size);
    printArray(arr, size);

    return 0;
}
