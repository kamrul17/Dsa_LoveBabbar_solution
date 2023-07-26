#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n)
{

    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        switch (arr[low])
        {
        case 0:

            low++;

            break;
        case 1:

            swap(arr[low], arr[high]);

            high--;
        }
    }
}

int main()
{

    int arr[8] = {1, 1, 0, 1, 0, 0, 1, 0};

    sortOne(arr, 8);
    printArray(arr, 8);

    return 0;
}
// while (left < right)
// {

//     while (arr[left] == 0 && left < right)
//     {
//         left++;
//     }

//     while (arr[right] == 1 && left < right)
//     {
//         right--;
//     }

//     // agar yha pohoch gye ho, iska matlab
//     // arr[left]==1 and arr[right]==0
//     if (left < right)
//     {
//         swap(arr[left], arr[right]);
//         left++;
//         right--;
//     }
// }