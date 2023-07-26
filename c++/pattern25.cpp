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
        // 1st triangle
        int j = 1;
        while (j <= i)
        {

            cout << j;

            j++;
        }
        // 2nd triangle
        int start = i - 1;
        while (start)
        {
            cout << start;
            start--;
        }

        cout << endl;
        i++;
    }
}
