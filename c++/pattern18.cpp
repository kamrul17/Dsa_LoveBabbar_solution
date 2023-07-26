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
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        // stars print karlo
        int j = 1;
        while (j <= i)
        {

            cout << "*";

            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}