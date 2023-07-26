#include <iostream>
using namespace std;
// Row wise sum
// -----------------

int maxRow(int arr[][3], int n, int m)
{
    // int maxi = -1;
    int maxi = INT16_MIN;
    // int maxi = INT16_MAX;
    int rowIndex = -1;
    for (int i = 0; i < 2; i++)
    {
        int sum = 0;

        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "the maximum sum is " << maxi << endl;
    return rowIndex;
}

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
    int ansINdex = maxRow(arr, 2, 3);
    cout << "max row is at index " << ansINdex << endl;

    return 0;
}