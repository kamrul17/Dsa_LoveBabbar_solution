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
        // int value = i;
        int count = 1 + i - 1;
        while (j <= i)
        {
            cout << count;
            count++;
            // cout << value << " ";
            // value++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}