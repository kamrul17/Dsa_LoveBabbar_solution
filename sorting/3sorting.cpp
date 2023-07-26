#include <iostream>
using namespace std;

// void insertionSort(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int temp = arr[i];
//         int j = i - 1;
//         for (; j >= 0; j--)
//         {
//             if (arr[j] > temp)
//             {
//                 arr[j + 1] = arr[j];
//             }
//             else
//             {
//                 break;
//             }
//         }

//         arr[j + 1] = temp;
//     }
// }

// void selectionSort(int arr[], int n)
// {
//     for (int i = 0; i <= n - 2; i++)
//     {

//         for (int j = i; j <= n - 1; j++)
//         {
//             int min = i;
//             {
//                 if (arr[j] < arr[min])
//                 {
//                     min = j;
//                 }
//                 int temp = arr[min];
//                 arr[min] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
// }
// void bubbleSort(int arr[], int n)
// {
//     for (int i = n - 1; i >= 0; i--)
//     {
//         int didswap = 0;
//         for (int j = 0; j <= i - 1; j++)
//         {

//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = temp;
//                 didswap = 1;
//             }
//         }
//         if (didswap == 0)
//         {
//             break;
//         }
//         cout << "runs\n";
//     }
// }
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // selectionSort(arr, n);
    // bubbleSort(arr, n);
    // insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}