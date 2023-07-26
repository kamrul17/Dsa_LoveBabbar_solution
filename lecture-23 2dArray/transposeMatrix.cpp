#include <iostream>
using namespace std;

void transpose(int arr[][3], int n, int m)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}
void reverseArray(int arr[][3], int n, int m)
{

    for (int i = 0; i < n; i++)
    {
        int start = 0;
        int end = m - 1;
        swap(arr[i][start], arr[i][end]);
        start++;
        end--;
    }
}
void print2DArray(int arr[][3], int n, int m)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[3][3];

    // row wise input
    // ----------------------------------
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    transpose(arr, 3, 3);
    reverseArray(arr, 3, 3);
    print2DArray(arr, 3, 3);
    return 0;
}