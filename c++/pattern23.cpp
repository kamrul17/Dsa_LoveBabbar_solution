#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    int count = 1;
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

            cout << count;
            count++;

            j++;
        }
        cout << endl;
        i++;
    }
}
