#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;

    cin >> n;
    while (i <= n)
    {
        // space print karlo
        int count = 1 + i - 1;
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        // stars print karlo
        int j = 1;
        while (j <= n - i + 1)
        {

            cout << count;
            count++;

            j++;
        }
        cout << endl;
        i++;
    }
    // while (i <= n)
    // {
    //     // space print karlo
    //     int space = 1;
    //     int j = n;
    //     int count = i;

    //     while (space <= i - 1)
    //     {
    //         cout << " ";
    //         space++;
    //     }
    //     // stars print karlo

    //     while (j >= i)
    //     {

    //         cout << count;
    //         count++;

    //         j--;
    //     }
    //     cout << endl;
    //     i++;
    // }
}
