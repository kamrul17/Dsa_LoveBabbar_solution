#include <iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int n, int m)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[2][3];
    // hard code input
    // ----------------------------------
    // int arr[2][3] = {1, 2, 3, 4, 5, 6};
    // int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // row wise input
    // ----------------------------------
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    // column wise input
    // ----------------------------------
    // for (int j = 0; j < 3; j++)
    // {
    //     for (int i = 0; i < 2; i++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the element to search " << endl;
    int target;
    cin >> target;
    if (isPresent(arr, target, 2, 3))
    {
        cout << "Element is found " << endl;
    }
    else
    {
        cout << "Element is not found " << endl;
    }
    return 0;
}