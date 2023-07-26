#include <iostream>
using namespace std;
// Row wise sum
// -----------------

void wavePrint(int arr[][3], int n, int m)
{

    for (int j = 0; j < m; j++)
    {
        // odd  index->bottom to top
        if (j & 1)
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            // odd  index->bottom to top
            for (int i = 0; i < n; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
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

    wavePrint(arr, 2, 3);

    return 0;
}