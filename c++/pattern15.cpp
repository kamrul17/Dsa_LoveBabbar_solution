#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    char count = 'A';
    cin >> n;
    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {

            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}