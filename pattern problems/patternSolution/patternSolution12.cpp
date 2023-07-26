#include <iostream>
using namespace std;
int main()
{
    int n, k = 0;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        i <= 6 ? k++ : k--;
        for (int j = 1; j <= n; j++)
        {
            if ((j <= 7 - k) || (j >= 5 + k))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}