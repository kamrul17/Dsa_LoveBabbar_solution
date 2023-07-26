#include <iostream>
using namespace std;
// Row wise sum
// -----------------

void printSum(int arr[][3], int n, int m)
{
    for (int i = 0; i < 2; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " " << endl;
    }
    cout << endl;
}

// col wise sum
// -----------------
// void printColSum(int arr[][3], int n, int m)
// {
//     for (int j = 0; j < 3; j++)
//     {
//         int sum = 0;
//         for (int i = 0; i < 2; i++)
//         {
//             sum += arr[i][j];
//         }
//         cout << sum << " " << endl;
//     }
//     cout << endl;
// }
int main()
{
    int arr[2][3];

    // row wise input
    // ----------------------------------
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    printSum(arr, 2, 3);
    // printColSum(arr, 2, 3);

    return 0;
}