#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;

    cin >> n;
    while (i <= n)
    {

        // 1st triangle
        int j = 1;
        while (j <= n - i + 1)
        {

            cout << j;

            j++;
        }
        // // 2nd triangle
        int start = 1;
        while (start <= i - 1)
        {

            cout << "*";

            start++;
        }
        int start2 = 1;
        while (start2 <= i - 1)
        {

            cout << "*";

            start2++;
        }
        // third triangle
        int k = n - i + 1;
        while (k)
        {
            cout << k;
            k--;
        }

        cout << endl;
        i++;
    }
}
