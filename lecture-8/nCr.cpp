#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int nemu = factorial(n);
    int denu = factorial(r) * factorial(n - r);
    return nemu / denu;
}
int main()
{
    int n, r;
    cin >> n >> r;

    cout << "nCr =" << nCr(n, r);
    return 0;
}