#include <iostream>
#include <deque>

using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    // d.pop_back();

    // cout << d.front() << endl;
    // cout << d.back() << endl;
    // cout << "empty element " << d.empty() << endl;

    for (int i : d)
    {
        cout << i << " ";
    }

    return 0;
}