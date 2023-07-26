#include <iostream>
using namespace std;
int main()
{
    int n;

    cin >> n;
    int i = 1;
    while (i <= n)
    {

        int j = 1;
        while (j <= n)
        {
            if (i == 1 && j == 1 || i == 1 && j == 5 || i == 2 && j == 2 || i == 2 && j == 4 || i == 3 && j == 3 || i == 4 && j == 1 || i == 4 && j == 5)
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
        i++;
    }

    return 0;
}