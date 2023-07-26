// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int i = 1;
//     cin >> n;
// //     while (i <= n)
//     {
//         int space = n - i;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }

//         int j = 1;
//         while (j <= i)
//         {
//             cout << "*";
//             j++;
//         }
//         int space1 = i - 1;
//         while (space1)
//         {
//             cout << " ";
//             space1--;
//         }

//         int k = 1;
//         while (k <= n - i)
//         {
//             cout << "*";
//             k++;
//         }
//         cout << endl;
//         i++;
//     }

//     return 0;
// }
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
        for (space = 1; space <= n - i; space--)
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
        for (space = 1; space <= i - 1; space--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}