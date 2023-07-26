// #include <iostream>
// using namespace std;

// void passByValue(int n)
// {
//     n++;
//     cout << "hey there " << n << endl;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     passByValue(n);

//     cout << "passByValue =" << n;

//     return 0;
// }
// #include <iostream>
// using namespace std;

// void passByValue(int n)
// {
//     n = n / 2;
// }
// int main()
// {
//     int n = 10;

//     passByValue(n);

//     cout << "passByValue =" << n;

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int passByValue(int n)
// {
//     n -= 5;
//     return n;
// }
// int main()
// {
//     int n = 15;

//     passByValue(n);

//     cout << "passByValue =" << n;

//     return 0;
// }
#include <iostream>
using namespace std;

int passByValue(int n)
{
    int ans = n * n;
    return ans;
}
int main()
{
    int n = 14;

    n = passByValue(n);

    cout << "passByValue =" << n;

    return 0;
}