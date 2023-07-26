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

                        cout << i;

            j++;
        }
        cout << endl;
        i++;
    }
}
