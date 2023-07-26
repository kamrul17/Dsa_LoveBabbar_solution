#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;

    cin >> n;
    while (i <= n)
    {
        int j = 1;
        int count = 1 + i - 1;

        while (j <= i)
        {

            // cout << i - j + 1 << " ";
            cout << count;
            count--;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}