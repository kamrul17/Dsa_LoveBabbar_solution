#include <iostream>
using namespace std;
int main()
{
    int n;

    cin >> n;
    int i = n;
    while (i >= 1)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        int j = 1;
        while (j <= 2 * i - 1)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
            j++;
        }
        cout << endl;
        i--;
    }

    return 0;
}