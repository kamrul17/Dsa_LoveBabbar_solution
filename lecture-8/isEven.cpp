#include <iostream>
using namespace std;
bool isEven(int num)
{
    // 1->even
    // 0->odd
    if ((num & 1))
    {
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    if (isEven(n))
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
    return 0;
}