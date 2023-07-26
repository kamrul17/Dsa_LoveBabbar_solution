#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    int space = 1;
    int j;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (space = 1; space <= n - i; space++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (space = 1; space <= n - i; space++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // while (i <= n)
    // {
    //     // pyramid star
    //     int space1 = n - i;
    //     while (space1)
    //     {
    //         cout << " ";
    //         space1--;
    //     }

    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << "* ";
    //         j++;
    //     }

    // 2nd triangle
    // int space2 = i - 1;
    // while (space2)
    // {
    //     cout << " ";
    //     space2--;
    // }
    // int k = 1;
    // while (k <= 5 - i)
    // {
    //     cout << "* ";
    //     k++;
    // }
    // cout << endl;
    // i++;

    return 0;
}